public class CreateAccount {
 public String name {get; set;}
 public String phoneNumber {get; set;}
 public String selectedname {get; set;}
 public String websiteURL {get; set;}
 public List<Selectoption> lstnamesel {get; set;}
 
 public CreateAccount(ApexPages.StandardController controller) {
 lstnamesel = new List<selectoption>();
 lstnamesel.add(new selectOption('','- None -'));
 lstnamesel.add(new selectOption('IT','IT'));
 lstnamesel.add(new selectOption('MECH','MECH'));
 lstnamesel.add(new selectOption('CHEM','CHEM'));
 lstnamesel.add(new selectOption('PHARMA','PHARMA'));
 }
 public PageReference createAccount() {
 System.debug('teset create');
 if(!String.isEmpty(name)) {
 Account accountRecord = new Account(Name = name,
 Phone = phoneNumber,
 Industry = selectedname,
 Website = websiteURL);
 INSERT accountRecord;
 
 PageReference pg = new PageReference('/'+accountRecord.Id);
 pg.setRedirect(true);
 return pg; 
 } else {
 ApexPages.addmessage(new ApexPages.message(ApexPages.severity.CONFIRM,'Please enter 
Account Name'));
 }
 return NULL;
 }
 
 public PageReference cancelAccount() { 
 PageReference pg = new PageReference('/'+Schema.SObjectType.Account.getKeyPrefix()+'/o');
 return pg;
 }
}

visual

public class CreateAccount {
 public String name {get; set;}
 public String phoneNumber {get; set;}
 public String selectedname {get; set;}
 public String websiteURL {get; set;}
 public List<Selectoption> lstnamesel {get; set;}
 
 public CreateAccount(ApexPages.StandardController controller) {
 lstnamesel = new List<selectoption>();
 lstnamesel.add(new selectOption('','- None -'));
 lstnamesel.add(new selectOption('IT','IT'));
 lstnamesel.add(new selectOption('MECH','MECH'));
 lstnamesel.add(new selectOption('CHEM','CHEM'));
 lstnamesel.add(new selectOption('PHARMA','PHARMA'));
 }
 public PageReference createAccount() {
 System.debug('teset create');
 if(!String.isEmpty(name)) {
 Account accountRecord = new Account(Name = name,
 Phone = phoneNumber,
 Industry = selectedname,
 Website = websiteURL);
 INSERT accountRecord;
 
 PageReference pg = new PageReference('/'+accountRecord.Id);
 pg.setRedirect(true);
 return pg; 
 } else {
 ApexPages.addmessage(new ApexPages.message(ApexPages.severity.CONFIRM,'Please enter 
Account Name'));
 }
 return NULL;
 }
 
 public PageReference cancelAccount() { 
 PageReference pg = new PageReference('/'+Schema.SObjectType.Account.getKeyPrefix()+'/o');
 return pg;
 }
}


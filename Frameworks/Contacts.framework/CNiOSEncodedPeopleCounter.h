
@interface CNiOSEncodedPeopleCounter : NSObject {
    CNiOSAddressBook * _addressBook;
    CNContactFetchRequest * _contactFetchRequest;
    CNContactsEnvironment * _environment;
    <CNContactsLogger> * _logger;
    CNManagedConfiguration * _managedConfiguration;
    <CNiOSContactPredicate> * _privatePredicate;
}

- (void).cxx_destruct;
- (id)fetchContactCountWithError:(id*)arg1;
- (id)initWithFetchRequest:(id)arg1 addressBook:(id)arg2 managedConfiguration:(id)arg3;
- (bool)supportsCounting;

@end

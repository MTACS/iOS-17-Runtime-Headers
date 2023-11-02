
@interface CNiOSContactFetcher : NSObject {
    void * _addressBook;
    CNContactsEnvironment * _environment;
    CNContactFetchRequest * _fetchRequest;
    CNManagedConfiguration * _managedConfiguration;
    id /* block */  _personToContact;
}

+ (id)contactsForFetchRequest:(id)arg1 matchInfos:(id*)arg2 inAddressBook:(void*)arg3 environment:(id)arg4 managedConfiguration:(id)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (void)dealloc;
- (id)executeFetchRequestWithProgressiveResults:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)fetchContactsReturningMatchInfos:(id*)arg1 error:(id*)arg2;
- (id)initWithFetchRequest:(id)arg1 addressBook:(void*)arg2 environment:(id)arg3 managedConfiguration:(id)arg4;

@end

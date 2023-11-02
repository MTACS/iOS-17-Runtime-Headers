
@interface CNUICoreContactStoreProductionFacade : NSObject <CNUICoreContactStoreFacade, CNUICoreParentContainerProvider> {
    CNContactStore * _contactStore;
}

@property (nonatomic, readonly) CNContactStore *contactStore;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2;
- (id)contactStore;
- (id)containerForContact:(id)arg1;
- (bool)enumerateContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)initWithContactStore:(id)arg1;

@end


@interface CNUICoreContactStoreTestFacade : NSObject <CNUICoreContactStoreFacade> {
    NSArray * _contacts;
    NSArray * _executedFetchRequests;
    NSArray * _executedSaveRequests;
    NSError * _fetchError;
    CNContact * _meContact;
    NSError * _saveError;
}

@property (nonatomic, retain) NSArray *contacts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *executedFetchRequests;
@property (nonatomic, retain) NSArray *executedSaveRequests;
@property (nonatomic, retain) NSError *fetchError;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CNContact *meContact;
@property (nonatomic, retain) NSError *saveError;
@property (readonly) Class superclass;

+ (id)contactsBySimulatingExecutionOfSaveRequest:(id)arg1 onContacts:(id)arg2;

- (void).cxx_destruct;
- (id)_crossPlatformUnifiedMeContactWithKeysToFetch:(id)arg1 error:(id*)arg2;
- (void)commonInitWithMeContact:(id)arg1 contacts:(id)arg2 saveError:(id)arg3 fetchError:(id)arg4;
- (id)contacts;
- (bool)enumerateContactsWithFetchRequest:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)executeSaveRequest:(id)arg1 error:(id*)arg2;
- (id)executedFetchRequests;
- (id)executedSaveRequests;
- (id)fetchError;
- (id)init;
- (id)initWithContacts:(id)arg1;
- (id)initWithMeContact:(id)arg1 contacts:(id)arg2;
- (id)initWithSaveError:(id)arg1 fetchError:(id)arg2;
- (id)meContact;
- (id)saveError;
- (void)setContacts:(id)arg1;
- (void)setExecutedFetchRequests:(id)arg1;
- (void)setExecutedSaveRequests:(id)arg1;
- (void)setFetchError:(id)arg1;
- (void)setMeContact:(id)arg1;
- (void)setSaveError:(id)arg1;

@end


@interface KMContactStoreBridge : NSObject <KMProviderDeltaDatasetBridge> {
    CNContactStore * _contactStore;
    NSData * _historyToken;
    KVItemMapper * _itemMapper;
    KMProviderHistoryLog * _log;
    NSDictionary * _mapperAdditionalFields;
    unsigned long long  _version;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_contactFetchKeys;

- (void).cxx_destruct;
- (bool)_checkAuthorizationAndFetchMeCard;
- (id)_fetchContactsWithIdentifiers:(id)arg1 error:(id*)arg2;
- (void)changesAccepted;
- (bool)enumerateDeltaItemsWithError:(id*)arg1 addOrUpdateBlock:(id /* block */)arg2 removeBlock:(id /* block */)arg3;
- (bool)enumerateItemsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)init;
- (id)initWithContactStore:(id)arg1 historyLog:(id)arg2;
- (bool)isDeltaEligible;
- (long long)itemType;
- (id)lastChangesAccepted;
- (id)originAppId;
- (void)recordDonationAttempt;
- (void)resetDeltaState;
- (id)validity;
- (unsigned long long)version;

@end

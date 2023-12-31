
@interface MPCReportingIdentityProperties : NSObject {
    ICPlayActivityEnqueuerProperties * _enqueuerProperties;
    bool  _hasSubscriptionPlaybackCapability;
    NSString * _householdID;
    unsigned long long  _storeAccountID;
    NSString * _storeFrontID;
}

@property (nonatomic, copy) ICPlayActivityEnqueuerProperties *enqueuerProperties;
@property (nonatomic) bool hasSubscriptionPlaybackCapability;
@property (nonatomic, copy) NSString *householdID;
@property (nonatomic) unsigned long long storeAccountID;
@property (nonatomic, copy) NSString *storeFrontID;

- (void).cxx_destruct;
- (id)enqueuerProperties;
- (bool)hasSubscriptionPlaybackCapability;
- (id)householdID;
- (void)setEnqueuerProperties:(id)arg1;
- (void)setHasSubscriptionPlaybackCapability:(bool)arg1;
- (void)setHouseholdID:(id)arg1;
- (void)setStoreAccountID:(unsigned long long)arg1;
- (void)setStoreFrontID:(id)arg1;
- (unsigned long long)storeAccountID;
- (id)storeFrontID;

@end

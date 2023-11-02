
@interface AMSSyncRestrictedRegionTask : AMSTask <AMSBagConsumer> {
    ACAccount * _account;
    <AMSBagProtocol> * _bag;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)bagSubProfile;
+ (id)bagSubProfileVersion;
+ (double)checkRestrictedRegionDurationValueFromBag:(id)arg1;
+ (id)createBagForSubProfile;
+ (id)createSyncAccountFlagsTaskForAccount:(id)arg1 bag:(id)arg2;
+ (bool)didExceededSyncDuration:(double)arg1 lastTimestamp:(double)arg2 currentTimestamp:(double)arg3;
+ (double)durationOfSyncRestrictedRegionValueFromBag:(id)arg1;
+ (bool)hasCachedRestrictedRegionsValueFromAccount:(id)arg1 cachedTimestamp:(double*)arg2;
+ (bool)storefrontContainsRestrictedRegionsValueFromBag:(id)arg1;

- (void).cxx_destruct;
- (id)account;
- (id)bag;
- (void)cacheRestrictedRegionSyncTimestamp:(double)arg1;
- (id)initWithAccount:(id)arg1;
- (id)initWithAccount:(id)arg1 bag:(id)arg2;
- (id)performSync;
- (void)setAccount:(id)arg1;
- (void)setBag:(id)arg1;

@end

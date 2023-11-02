
@interface CKDPCSKeySyncCoreAnalytics : NSObject {
    NSNumber * _KRSReturnedExistingIdentity;
    NSString * _bundleID;
    NSString * _context;
    NSError * _error;
    NSNumber * _isManatee;
    NSNumber * _keySyncDurationSec;
    NSString * _keySyncResult;
    NSString * _overallResult;
    NSString * _serviceName;
    NSNumber * _shouldThrottle;
    NSNumber * _throttledDurationSec;
}

@property (nonatomic) NSNumber *KRSReturnedExistingIdentity;
@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *context;
@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSNumber *isManatee;
@property (nonatomic, retain) NSNumber *keySyncDurationSec;
@property (nonatomic, retain) NSString *keySyncResult;
@property (nonatomic, retain) NSString *overallResult;
@property (nonatomic, retain) NSString *serviceName;
@property (nonatomic, retain) NSNumber *shouldThrottle;
@property (nonatomic, retain) NSNumber *throttledDurationSec;

- (void).cxx_destruct;
- (id)KRSReturnedExistingIdentity;
- (id)bundleID;
- (id)context;
- (id)error;
- (id)isManatee;
- (id)keySyncDurationSec;
- (id)keySyncResult;
- (id)overallResult;
- (id)serviceName;
- (void)setBundleID:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setError:(id)arg1;
- (void)setIsManatee:(id)arg1;
- (void)setKRSReturnedExistingIdentity:(id)arg1;
- (void)setKeySyncDurationSec:(id)arg1;
- (void)setKeySyncResult:(id)arg1;
- (void)setOverallResult:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setShouldThrottle:(id)arg1;
- (void)setThrottledDurationSec:(id)arg1;
- (id)shouldThrottle;
- (id)throttledDurationSec;

@end

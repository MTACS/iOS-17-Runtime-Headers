
@interface WFNetworkRetryManager : NSObject {
    NSMutableDictionary * _failTrackerDict;
    NSMutableSet * _failingAPIVersionsSet;
}

@property (nonatomic, readonly) NSArray *apiVersions;
@property (nonatomic, readonly) NSMutableDictionary *failTrackerDict;
@property (nonatomic, readonly) NSArray *failingAPIVersions;
@property (nonatomic, readonly) NSMutableSet *failingAPIVersionsSet;

- (void).cxx_destruct;
- (id)apiVersionForSettings:(id)arg1;
- (id)apiVersions;
- (int)consecutiveFailsForAPIVersion:(id)arg1;
- (bool)defaultAPIVersionIsFailingForSettings:(id)arg1 failTracker:(id)arg2;
- (id)failTrackerDict;
- (id)failingAPIVersions;
- (id)failingAPIVersionsSet;
- (id)init;
- (double)lastFailTimeInSecondsForAPIVersion:(id)arg1;
- (void)requestFailureForAPIVersion:(id)arg1 error:(id)arg2;
- (void)requestSuccessForAPIVersion:(id)arg1;

@end

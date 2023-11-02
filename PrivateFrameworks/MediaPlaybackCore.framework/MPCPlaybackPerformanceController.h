
@interface MPCPlaybackPerformanceController : NSObject {
    NSDate * _lastCDNWarming;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableDictionary * _trialExperiments;
}

@property (nonatomic, readonly, copy) NSString *deploymentID;
@property (nonatomic, readonly, copy) NSString *experimentID;
@property (nonatomic, retain) NSDate *lastCDNWarming;
@property (nonatomic, readonly, copy) NSString *treatmentID;

+ (id)sharedController;

- (void).cxx_destruct;
- (id)deploymentID;
- (id)experimentID;
- (id)init;
- (id)lastCDNWarming;
- (void)loadAVAssetWithURL:(id)arg1;
- (void)markCDNConnectionWarmed;
- (void)setLastCDNWarming:(id)arg1;
- (id)sortedExperiments;
- (id)treatmentID;
- (id)trialExperimentWithNamespaceName:(id)arg1;
- (void)warmCDNConnection;

@end

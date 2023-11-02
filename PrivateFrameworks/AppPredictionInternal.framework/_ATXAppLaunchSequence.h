
@interface _ATXAppLaunchSequence : NSObject {
    _ATXDataStore * _datastore;
    int  _launchType;
    bool  _previousAppDeleted;
    NSString * _previousLaunch;
    struct _opaque_pthread_rwlock_t { 
        long long __sig; 
        BOOL __opaque[192]; 
    }  _rwlock;
    NSMutableDictionary * _subsequentLaunchCountMap;
    double  _subsequentLaunchTotalCount;
}

@property (nonatomic, readonly) bool previousAppDeleted;
@property (nonatomic, readonly) double subsequentLaunchTotalCount;

- (void).cxx_destruct;
- (void)_deleteDataForLaunchLocked:(id)arg1;
- (void)addSubsequentLaunch:(id)arg1;
- (void)dealloc;
- (void)decayByFactor:(double)arg1;
- (void)decayWithHalfLifeInDays:(double)arg1;
- (void)deleteAllInformation;
- (void)deleteDataForLaunch:(id)arg1;
- (void)deleteDataForLaunches:(id)arg1;
- (id)initWithPreviousAppActionLaunch:(id)arg1 dataStore:(id)arg2;
- (id)initWithPreviousAppActionLaunch:(id)arg1 dataStore:(id)arg2 allowSimulatedCrashes:(bool)arg3;
- (id)initWithPreviousAppActionLaunch:(id)arg1 subsequentAppActionLaunchCounts:(id)arg2 dataStore:(id)arg3 allowSimulatedCrashes:(bool)arg4;
- (id)initWithPreviousLaunch:(id)arg1 dataStore:(id)arg2;
- (id)initWithPreviousLaunch:(id)arg1 dataStore:(id)arg2 allowSimulatedCrashes:(bool)arg3;
- (id)initWithPreviousLaunch:(id)arg1 subsequentLaunchCounts:(id)arg2 dataStore:(id)arg3 allowSimulatedCrashes:(bool)arg4 launchType:(int)arg5;
- (double)launchCount:(id)arg1;
- (double)likelihoodForLaunch:(id)arg1;
- (bool)previousAppDeleted;
- (void)save;
- (double)subsequentLaunchTotalCount;

@end

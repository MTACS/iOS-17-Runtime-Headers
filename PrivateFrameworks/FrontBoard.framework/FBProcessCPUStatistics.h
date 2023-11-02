
@interface FBProcessCPUStatistics : NSObject {
    RBSProcessHandle * _handle;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    struct FBProcessTimes { 
        double beginUserCPUElapsedTime; 
        double beginSystemCPUElapsedTime; 
        double beginIdleCPUElapsedTime; 
        double beginApplicationCPUElapsedTime; 
    }  _times;
}

@property (nonatomic, readonly) double totalElapsedIdleTime;
@property (nonatomic, readonly) double totalElapsedSystemTime;
@property (nonatomic, readonly) double totalElapsedTime;
@property (nonatomic, readonly) double totalElapsedUserTime;

- (void).cxx_destruct;
- (void)_hostwideUserElapsedCPUTime:(out double*)arg1 systemElapsedCPUTime:(out double*)arg2 idleElapsedCPUTime:(out double*)arg3;
- (void)_lock_getApplicationCPUTimesForUser:(out double*)arg1 system:(out double*)arg2 idle:(out double*)arg3;
- (id)descriptionForCrashReport;
- (id)initWithProcessHandle:(id)arg1;
- (void)reset;
- (double)totalElapsedIdleTime;
- (double)totalElapsedSystemTime;
- (double)totalElapsedTime;
- (double)totalElapsedUserTime;

@end


@interface GEOReferenceTimeManager : NSObject <GEOConfigChangeListenerDelegate> {
    unsigned int  _attemptNum;
    bool  _isGEOAPD;
    geo_isolater * _iso;
    double  _managerStartTime;
    GEOReferenceTimeData * _refTimeData;
    NSObject<OS_dispatch_semaphore> * _syncSem;
    bool  _synchronized;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedManager;

- (void).cxx_destruct;
- (bool)_didKernBootTimeChange;
- (bool)_initFromPersistenceAtTime:(double)arg1;
- (id)_initInternal;
- (void)_kernBootTimeResult:(id /* block */)arg1;
- (void)_persistBasisRefTimeData:(id)arg1;
- (double)_referenceTime;
- (void)_reportCoreAnalyticAtTime:(double)arg1 success:(bool)arg2 error:(unsigned char)arg3 attemptNo:(unsigned int)arg4;
- (id)_retrievePersistedBasisRefTimeData;
- (void)_startTimedSync;
- (void)_syncWithTimed;
- (bool)_synchronized;
- (double)bestReferenceTime;
- (void)dealloc;
- (id)description;
- (void)referenceTimeResult:(id /* block */)arg1;
- (bool)synchronized;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x1; void *x2; })arg1;

@end

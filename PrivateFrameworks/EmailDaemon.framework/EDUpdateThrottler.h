
@interface EDUpdateThrottler : NSObject {
    double  _delayInterval;
    bool  _hasChangesSinceLastUpdate;
    NSDate * _lastAcknowledgementDate;
    NSDate * _lastUpdateDate;
    NSString * _name;
    <EDResumable> * _resumable;
    EFDebouncer * _resumeClientDebouncer;
    <EFScheduler> * _resumeClientScheduler;
    long long  _scalingFactor;
    NSMutableArray * _unacknowledgedUpdates;
    long long  _updateCounter;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _updatesLock;
}

@property (nonatomic, readonly) double delayInterval;
@property (nonatomic) bool hasChangesSinceLastUpdate;
@property (nonatomic, retain) NSDate *lastAcknowledgementDate;
@property (nonatomic, retain) NSDate *lastUpdateDate;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, retain) <EDResumable> *resumable;
@property (nonatomic, retain) EFDebouncer *resumeClientDebouncer;
@property (nonatomic, retain) <EFScheduler> *resumeClientScheduler;
@property (nonatomic, readonly) long long scalingFactor;
@property (nonatomic) long long updateCounter;

+ (void)_registerInstance:(id)arg1;
+ (id)instances;
+ (void)resetAllInstances;

- (void).cxx_destruct;
- (void)_reset;
- (void)dealloc;
- (double)delayInterval;
- (bool)hasChangesSinceLastUpdate;
- (id)initWithDelayInterval:(double)arg1 scalingFactor:(long long)arg2;
- (id)initWithName:(id)arg1 delayInterval:(double)arg2 resumable:(id)arg3;
- (id)initWithName:(id)arg1 delayInterval:(double)arg2 scalingFactor:(long long)arg3;
- (id)lastAcknowledgementDate;
- (id)lastUpdateDate;
- (id)name;
- (id)resumable;
- (id)resumeClientDebouncer;
- (id)resumeClientScheduler;
- (long long)scalingFactor;
- (void)setHasChangesSinceLastUpdate:(bool)arg1;
- (void)setLastAcknowledgementDate:(id)arg1;
- (void)setLastUpdateDate:(id)arg1;
- (void)setResumable:(id)arg1;
- (void)setResumeClientDebouncer:(id)arg1;
- (void)setResumeClientScheduler:(id)arg1;
- (void)setUpdateCounter:(long long)arg1;
- (unsigned long long)unacknowledgedUpdatesCountAndTimeSinceLastAcknowledgement:(double*)arg1;
- (long long)updateCounter;
- (id)updateWithBlock:(id /* block */)arg1 unacknowledgedUpdatesCount:(unsigned long long*)arg2;

@end

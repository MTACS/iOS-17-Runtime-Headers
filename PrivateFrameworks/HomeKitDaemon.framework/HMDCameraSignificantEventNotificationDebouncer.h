
@interface HMDCameraSignificantEventNotificationDebouncer : HMFObject <HMFLogging, HMFTimerDelegate> {
    HMFTimer * _cleanupTimer;
    double  _distinctPersonDebounceTimeInterval;
    NSMutableDictionary * _lastDateNotifiedByPersonIdentifier;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _logIdentifier;
}

@property (readonly) HMFTimer *cleanupTimer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) double distinctPersonDebounceTimeInterval;
@property (readonly) unsigned long long hash;
@property (readonly) NSMutableDictionary *lastDateNotifiedByPersonIdentifier;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (readonly, copy) NSString *logIdentifier;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)cleanupTimer;
- (double)distinctPersonDebounceTimeInterval;
- (id)initWithLogIdentifier:(id)arg1;
- (id)lastDateNotifiedByPersonIdentifier;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)logIdentifier;
- (void)timerDidFire:(id)arg1;
- (void)trackCameraSignificantEvent:(id)arg1 shouldNotify:(bool*)arg2;

@end

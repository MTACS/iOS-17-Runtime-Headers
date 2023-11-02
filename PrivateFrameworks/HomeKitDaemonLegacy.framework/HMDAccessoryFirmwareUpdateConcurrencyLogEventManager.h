
@interface HMDAccessoryFirmwareUpdateConcurrencyLogEventManager : HMFObject {
    HMDEventCountersManager * _countersManager;
    NSMutableArray * _currentActivity;
    NSMutableDictionary * _inProgress;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSMutableArray * _peakActivity;
}

@property (nonatomic, readonly) HMDEventCountersManager *countersManager;
@property (nonatomic, retain) NSMutableArray *currentActivity;
@property (nonatomic, retain) NSMutableDictionary *inProgress;
@property (nonatomic, retain) NSMutableArray *peakActivity;

- (void).cxx_destruct;
- (id)countersManager;
- (id)currentActivity;
- (unsigned long long)differenceFromCounterWithCategory:(unsigned long long)arg1;
- (id)inProgress;
- (id)initWithCountersManager:(id)arg1;
- (id)peakActivity;
- (void)setCurrentActivity:(id)arg1;
- (void)setInProgress:(id)arg1;
- (void)setPeakActivity:(id)arg1;
- (void)startApplyWithAccessory:(id)arg1;
- (void)startStagingWithAccessory:(id)arg1;
- (void)startWithCategory:(unsigned long long)arg1 accessory:(id)arg2;
- (void)stopApplyWithAccessory:(id)arg1;
- (void)stopStagingWithAccessory:(id)arg1;
- (void)stopWithCategory:(unsigned long long)arg1 accessory:(id)arg2;
- (void)submitLogEvent;

@end


@interface HMDMicroLocationManager : HMFObject <HMFLogging> {
    id /* block */  _dateFactory;
    NSMutableArray * _lastLocalizationScanTimes;
    NSMutableArray * _lastRecordingScanTimes;
    HMDLocation * _locationManager;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)initWithLocationManager:(id)arg1;
- (id)initWithLocationManager:(id)arg1 dateFactory:(id /* block */)arg2;
- (void)triggerThrottledMicroLocationLocalizationScanWithMetadata:(id)arg1 triggerType:(unsigned long long)arg2;
- (void)triggerThrottledMicroLocationRecordingScanWithMetadata:(id)arg1 triggerType:(unsigned long long)arg2;

@end

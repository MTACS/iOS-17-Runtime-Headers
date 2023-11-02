
@interface ATXMicrolocationLocalization : NSObject {
    _PASSimpleCoalescingTimer * _coalescingTimer;
    CLLocationManager * _locationManager;
    NSObject<OS_dispatch_queue> * _queue;
}

- (void).cxx_destruct;
- (void)_triggerMicroLocationLocalization;
- (id)initWithLocationManager:(id)arg1;
- (void)initiateLocalization;

@end

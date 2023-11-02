
@interface HMDPowerLogObserver : HMFObject <HMMLogEventObserver> {
    HMDPowerLogObserverContext * _context;
}

@property (nonatomic, retain) HMDPowerLogObserverContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)supportedEventClasses;

- (void).cxx_destruct;
- (void)_reportCameraSettingsConfiguration:(id)arg1;
- (void)_reportConfiguration:(id)arg1;
- (id)context;
- (void)didReceiveEventFromDispatcher:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithLogEventDispatcher:(id)arg1;
- (void)setContext:(id)arg1;
- (void)start;
- (void)stop;

@end

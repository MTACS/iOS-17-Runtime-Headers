
@interface HKHRCardioFitnessAnalyticsManager : NSObject {
    NSObject<OS_dispatch_queue> * _queue;
    HKHRCardioFitnessAnalyticsSignalSource * _signalSource;
}

- (void).cxx_destruct;
- (void)_setKey:(id)arg1 value:(id)arg2 onPayloadIfPresent:(id)arg3;
- (id)initWithSignalSource:(id)arg1;
- (id)submitClassificationChartOverlaySelectedEventCurrentOverlay:(id)arg1 previousOverlay:(id)arg2;
- (id)submitDailyEventWithSource:(id)arg1 deviceContextsDict:(id)arg2;
- (id)submitOnboardingEventForStep:(id)arg1 acceptDefaults:(bool)arg2 countryCode:(id)arg3;

@end

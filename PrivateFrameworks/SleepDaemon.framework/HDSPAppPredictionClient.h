
@interface HDSPAppPredictionClient : NSObject <HDSPSleepProactiveBridge> {
    <HKSPSleepFocusModeBridge> * _sleepFocusModeBridge;
}

@property (nonatomic, readonly) <HKSPSleepFocusModeBridge> *sleepFocusModeBridge;

- (void).cxx_destruct;
- (void)createSuggestedHomeScreenPageWithCompletion:(id /* block */)arg1;
- (id)initWithSleepFocusModeBridge:(id)arg1;
- (id)sleepFocusModeBridge;

@end

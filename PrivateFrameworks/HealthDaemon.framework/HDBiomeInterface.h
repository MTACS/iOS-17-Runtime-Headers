
@interface HDBiomeInterface : NSObject {
    unsigned long long  _mostRecentBiomeEventType;
    HDWorkoutSessionConfiguration * _sessionConfiguration;
}

- (void).cxx_destruct;
- (void)_sendBiomeEvent:(id)arg1 toSource:(id)arg2;
- (bool)sleepFocusOn;
- (void)stopSessionWithIdentifier:(id)arg1 recoveredWorkoutConfiguration:(id)arg2;
- (void)workoutConfigurationUpdated:(id)arg1;
- (void)workoutSessionWithConfiguration:(id)arg1 transitionedToState:(long long)arg2 fromState:(long long)arg3;

@end

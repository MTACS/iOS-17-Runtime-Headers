
@interface CBCAManager : CBModule {
    float  _currentlySetMatrix;
    float  _currentlySetScaler;
    float  _digitalDimmingBrightnessScaler;
    NSMutableArray * _displays;
}

- (void)colorRampPropertyHandler:(id)arg1;
- (void)dealloc;
- (void)displayBrightnessPropertyHandler:(id)arg1;
- (void)handleNotificationForKey:(id)arg1 withProperty:(id)arg2;
- (id)initWithCADisplay:(id)arg1 andQueue:(id)arg2;
- (void)nitsThresholdPLCPropertyHandler:(id)arg1;
- (void)sendNotificationForKey:(id)arg1 andValue:(id)arg2;
- (void)updateDigitalDimmingBrightnessScaler:(id)arg1;

@end


@interface UISUserInterfaceStyleMode : NSObject {
    <UISUserInterfaceStyleModeDelegate> * _delegate;
    bool  _observingDefaults;
}

@property (nonatomic) struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; } customSchedule;
@property (nonatomic) long long modeValue;
@property (nonatomic) struct { long long x1; long long x2; } override;
@property (nonatomic, readonly) long long suggestedAutomaticModeValue;

- (void).cxx_destruct;
- (id)_commonAnalyticsEventDictionary;
- (void)_setOverride:(struct { long long x1; long long x2; })arg1 force:(bool)arg2;
- (struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })customSchedule;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;
- (long long)modeValue;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (struct { long long x1; long long x2; })override;
- (void)setCustomSchedule:(struct { struct { long long x_1_1_1; long long x_1_1_2; } x1; struct { long long x_2_1_1; long long x_2_1_2; } x2; })arg1;
- (void)setModeValue:(long long)arg1;
- (void)setOverride:(struct { long long x1; long long x2; })arg1;
- (long long)suggestedAutomaticModeValue;

@end

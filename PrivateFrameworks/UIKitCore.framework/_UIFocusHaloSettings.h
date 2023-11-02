
@interface _UIFocusHaloSettings : PTSettings {
    bool  _debugEnabled;
    double  _gapWidth;
    double  _thickness;
}

@property (nonatomic) bool debugEnabled;
@property (nonatomic) double gapWidth;
@property (nonatomic) double thickness;

+ (id)settingsControllerModule;

- (bool)debugEnabled;
- (double)gapWidth;
- (void)setDebugEnabled:(bool)arg1;
- (void)setDefaultValues;
- (void)setGapWidth:(double)arg1;
- (void)setThickness:(double)arg1;
- (double)thickness;

@end

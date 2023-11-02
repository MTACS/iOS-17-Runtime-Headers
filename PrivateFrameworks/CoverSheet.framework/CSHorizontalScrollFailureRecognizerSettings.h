
@interface CSHorizontalScrollFailureRecognizerSettings : PTSettings {
    double  _bottomAngle;
    bool  _enabled;
    unsigned long long  _maxAllowableVerticalOffset;
    double  _topAngle;
    bool  _viewDebugArea;
}

@property (nonatomic) double bottomAngle;
@property (nonatomic) bool enabled;
@property (nonatomic) unsigned long long maxAllowableVerticalOffset;
@property (nonatomic) double topAngle;
@property (nonatomic) bool viewDebugArea;

+ (id)settingsControllerModule;

- (double)bottomAngle;
- (bool)enabled;
- (unsigned long long)maxAllowableVerticalOffset;
- (void)setBottomAngle:(double)arg1;
- (void)setDefaultValues;
- (void)setEnabled:(bool)arg1;
- (void)setMaxAllowableVerticalOffset:(unsigned long long)arg1;
- (void)setTopAngle:(double)arg1;
- (void)setViewDebugArea:(bool)arg1;
- (double)topAngle;
- (bool)viewDebugArea;

@end

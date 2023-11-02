
@interface _UIBeamPointerSettings : _UIFreeformPointerSettings {
    double  _maxLength;
    double  _maxSnapLength;
    double  _minLength;
    double  _width;
}

@property (nonatomic) double maxLength;
@property (nonatomic) double maxSnapLength;
@property (nonatomic) double minLength;
@property (nonatomic) double width;

+ (id)settingsControllerModule;

- (double)maxLength;
- (double)maxSnapLength;
- (double)minLength;
- (void)setDefaultValues;
- (void)setMaxLength:(double)arg1;
- (void)setMaxSnapLength:(double)arg1;
- (void)setMinLength:(double)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end

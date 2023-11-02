
@interface SBDropShadowSettings : PTSettings {
    double  _continuousCornerRadius;
    double  _offsetX;
    double  _offsetY;
    double  _opacity;
    double  _radius;
}

@property (nonatomic) double continuousCornerRadius;
@property (nonatomic) double offsetX;
@property (nonatomic) double offsetY;
@property (nonatomic) double opacity;
@property (nonatomic) double radius;

+ (id)moduleWithSectionTitle:(id)arg1;
+ (id)settingsControllerModule;

- (double)continuousCornerRadius;
- (double)offsetX;
- (double)offsetY;
- (double)opacity;
- (double)radius;
- (void)setContinuousCornerRadius:(double)arg1;
- (void)setDefaultValues;
- (void)setOffsetX:(double)arg1;
- (void)setOffsetY:(double)arg1;
- (void)setOpacity:(double)arg1;
- (void)setRadius:(double)arg1;

@end


@interface PGMobilePIPSettings : PTSettings {
    double  _shadowContinuousCornerRadius;
    double  _shadowOffsetX;
    double  _shadowOffsetY;
    double  _shadowOpacity;
    double  _shadowRadius;
}

@property (nonatomic) double shadowContinuousCornerRadius;
@property (nonatomic) double shadowOffsetX;
@property (nonatomic) double shadowOffsetY;
@property (nonatomic) double shadowOpacity;
@property (nonatomic) double shadowRadius;

+ (id)settingsControllerModule;

- (void)setDefaultValues;
- (void)setShadowContinuousCornerRadius:(double)arg1;
- (void)setShadowOffsetX:(double)arg1;
- (void)setShadowOffsetY:(double)arg1;
- (void)setShadowOpacity:(double)arg1;
- (void)setShadowRadius:(double)arg1;
- (double)shadowContinuousCornerRadius;
- (double)shadowOffsetX;
- (double)shadowOffsetY;
- (double)shadowOpacity;
- (double)shadowRadius;

@end

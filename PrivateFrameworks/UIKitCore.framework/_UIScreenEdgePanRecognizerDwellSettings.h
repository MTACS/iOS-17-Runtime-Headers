
@interface _UIScreenEdgePanRecognizerDwellSettings : _UISettings {
    double  _longPressPermittedHorizontalMovement;
    double  _longPressPermittedVerticalMovement;
    double  _longPressRequiredDuration;
    double  _longPressTipPermittedHorizontalMovement;
    double  _longPressTipPermittedVerticalMovement;
}

@property (nonatomic) double longPressPermittedHorizontalMovement;
@property (nonatomic) double longPressPermittedVerticalMovement;
@property (nonatomic) double longPressRequiredDuration;
@property (nonatomic) double longPressTipPermittedHorizontalMovement;
@property (nonatomic) double longPressTipPermittedVerticalMovement;

+ (id)settingsControllerModule;

- (double)longPressPermittedHorizontalMovement;
- (double)longPressPermittedVerticalMovement;
- (double)longPressRequiredDuration;
- (double)longPressTipPermittedHorizontalMovement;
- (double)longPressTipPermittedVerticalMovement;
- (void)setDefaultValues;
- (void)setLongPressPermittedHorizontalMovement:(double)arg1;
- (void)setLongPressPermittedVerticalMovement:(double)arg1;
- (void)setLongPressRequiredDuration:(double)arg1;
- (void)setLongPressTipPermittedHorizontalMovement:(double)arg1;
- (void)setLongPressTipPermittedVerticalMovement:(double)arg1;

@end

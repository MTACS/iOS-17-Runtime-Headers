
@interface DBStatusBarSensorIndicatorView : UIView {
    long long  _sensorIndicatorType;
}

@property (nonatomic) long long sensorIndicatorType;

- (void)_updateColor;
- (id)init;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (long long)sensorIndicatorType;
- (void)setSensorIndicatorType:(long long)arg1;

@end

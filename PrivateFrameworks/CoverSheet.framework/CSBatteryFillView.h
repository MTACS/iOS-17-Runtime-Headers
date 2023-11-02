
@interface CSBatteryFillView : UIView {
    long long  _chargePercentage;
    bool  _isBatterySaverModeActive;
    bool  _isInternalBattery;
    long long  _lowBatteryLevel;
}

- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 isInternalBattery:(bool)arg2 lowBatteryLevel:(long long)arg3;
- (void)setBatterySaverModeActive:(bool)arg1;
- (void)setChargePercentage:(long long)arg1;

@end

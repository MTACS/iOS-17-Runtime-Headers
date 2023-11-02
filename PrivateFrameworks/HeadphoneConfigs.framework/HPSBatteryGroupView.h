
@interface HPSBatteryGroupView : UIView {
    UIImageView * batteryGlyphView;
    NSString * batteryLevelDescription;
    unsigned char  batteryPercentNumber;
}

- (void).cxx_destruct;
- (void)createBatteryGroupView:(bool)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 batteryPercent:(unsigned char)arg2 isCharging:(bool)arg3 glyph:(id)arg4 batteryLevelDescription:(id)arg5;

@end


@interface NTKWhistlerSubdialsTimeView : NTKDualTimeView {
    NTKWhistlerAnalogColorPalette * _palette;
}

@property (nonatomic, retain) NTKWhistlerAnalogColorPalette *palette;

- (void).cxx_destruct;
- (id)_digitalTimeLabelColorForColorPalette:(id)arg1;
- (id)_hourMinuteHandFillColorForColorPalette:(id)arg1;
- (id)_hourMinuteHandStrokeColorForColorPalette:(id)arg1;
- (unsigned long long)_hourTickCount;
- (struct CGSize { double x1; double x2; })_hourTickSize;
- (unsigned long long)_minuteTickCount;
- (double)_minuteTickInset;
- (struct CGSize { double x1; double x2; })_minuteTickSize;
- (id)_secondHandColorForColorPalette:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 style:(unsigned long long)arg2 andDevice:(id)arg3;
- (id)palette;
- (void)setPalette:(id)arg1;

@end

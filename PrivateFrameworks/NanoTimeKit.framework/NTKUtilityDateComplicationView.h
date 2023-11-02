
@interface NTKUtilityDateComplicationView : NTKUtilityComplicationView {
    unsigned long long  _dateStyle;
    NTKDateComplicationLabel * _label;
}

@property (nonatomic, readonly) unsigned long long dateStyle;
@property (nonatomic, retain) CLKFont *font;

- (void).cxx_destruct;
- (void)_invalidateLabelSize;
- (double)_widthThatFits;
- (id)accentColor;
- (unsigned long long)dateStyle;
- (id)foregroundColor;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)setAccentColor:(id)arg1;
- (void)setDateComplicationText:(id)arg1 withDayRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 forDateStyle:(unsigned long long)arg3;
- (void)setFont:(id)arg1;
- (void)setForegroundColor:(id)arg1;

@end

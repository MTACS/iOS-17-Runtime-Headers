
@interface MTUIDateLabel : UIView {
    NSDate * _date;
    UILabel * _dateLabel;
    NSString * _dateLabelText;
    UIFont * _font;
    UIColor * _textColor;
    UIFont * _timeDesignatorFont;
    NSTimeZone * _timeZone;
}

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, readonly) UILabel *dateLabel;
@property (nonatomic, copy) NSString *dateLabelText;
@property (nonatomic, retain) UIFont *font;
@property (nonatomic, retain) UIColor *textColor;
@property (nonatomic, retain) UIFont *timeDesignatorFont;
@property (nonatomic, retain) NSTimeZone *timeZone;

- (void).cxx_destruct;
- (id)_fontInfoForBaselineSpacing;
- (bool)_hasFontInfoForVerticalBaselineSpacing;
- (void)_updateDateString;
- (void)_updateLabel;
- (void)_updateTextString;
- (id)date;
- (id)dateLabel;
- (id)dateLabelText;
- (id)font;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)layoutSubviews;
- (void)setDate:(id)arg1;
- (void)setDateLabelText:(id)arg1;
- (void)setFont:(id)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTimeDesignatorFont:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;
- (id)textColor;
- (id)timeDesignatorFont;
- (id)timeZone;
- (id)viewForFirstBaselineLayout;
- (id)viewForLastBaselineLayout;

@end

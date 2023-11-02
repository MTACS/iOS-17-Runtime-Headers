
@interface NCSchedulerViewCell : UICollectionViewCell {
    UIView * _backgroundView;
    NSLayoutConstraint * _backgroundViewBottomConstraint;
    NSLayoutConstraint * _backgroundViewTopConstraint;
    UIView * _bottomCornersView;
    UIView * _bottomLineView;
    NCSymbolButton * _button;
    UIDatePicker * _datePicker;
    <NCSchedulerViewCellDelegate> * _delegate;
    UILabel * _label;
    NSLayoutConstraint * _labelLeadingConstraint;
    NSLayoutConstraint * _labelTrailingConstraint;
    UIView * _topCornersView;
}

@property (nonatomic) <NCSchedulerViewCellDelegate> *delegate;

+ (id)_drawingContext;
+ (id)_font;
+ (double)_widthForHour:(unsigned long long)arg1;
+ (double)preferredHeightForText:(id)arg1 width:(double)arg2;
+ (id)reuseIdentifier;

- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (double)_buttonSymbolSize;
- (void)_timeChanged:(id)arg1;
- (void)configureWithSymbolName:(id)arg1 symbolColor:(id)arg2 title:(id)arg3 timeOfDay:(id)arg4 delegate:(id)arg5 top:(bool)arg6 bottom:(bool)arg7;
- (id)delegate;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setDelegate:(id)arg1;

@end

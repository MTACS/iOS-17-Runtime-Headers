
@interface HKObjectPickerDetailView : UIView {
    UILabel * _primaryLabel;
    UILabel * _secondaryLabel;
}

@property (nonatomic, retain) UILabel *primaryLabel;
@property (nonatomic, retain) UILabel *secondaryLabel;

- (void).cxx_destruct;
- (void)_setUpSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)primaryLabel;
- (id)secondaryLabel;
- (void)setPrimaryLabel:(id)arg1;
- (void)setSecondaryLabel:(id)arg1;

@end

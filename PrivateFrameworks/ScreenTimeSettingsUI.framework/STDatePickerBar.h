
@interface STDatePickerBar : UIView {
    UIImageView * _bottomBorderLine;
    NSObject<STRootViewModelCoordinator> * _coordinator;
    UILabel * _dateLabel;
    UIButton * _leftArrowButton;
    UIButton * _rightArrowButton;
    STUsageReport * _usageReport;
}

@property (readonly) UIImageView *bottomBorderLine;
@property (retain) NSObject<STRootViewModelCoordinator> *coordinator;
@property (readonly) UILabel *dateLabel;
@property (readonly) UIImage *horizontalLineImage;
@property (readonly) UIButton *leftArrowButton;
@property (readonly) UIButton *rightArrowButton;
@property (retain) STUsageReport *usageReport;

- (void).cxx_destruct;
- (void)_configureArrowButton:(id)arg1 isLeft:(bool)arg2 isLayoutDirectionRightToLeft:(bool)arg3;
- (void)_leftDatePickerBarButtonTapped:(id)arg1;
- (void)_rightDatePickerBarButtonTapped:(id)arg1;
- (void)_stDatePickerBarCommonInit;
- (id)bottomBorderLine;
- (id)coordinator;
- (id)dateLabel;
- (id)horizontalLineImage;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leftArrowButton;
- (id)rightArrowButton;
- (void)setCoordinator:(id)arg1;
- (void)setUsageReport:(id)arg1;
- (void)updateWithCoordinator:(id)arg1;
- (id)usageReport;

@end

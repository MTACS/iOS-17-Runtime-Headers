
@interface _UIDatePickerOverlayPlatterView : UIView {
    UIView * _accessoryView;
    bool  _accessoryViewIgnoresDefaultInsets;
    UIView * _backgroundView;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _contentBounds;
    NSLayoutConstraint * _contentHeightConstraint;
    UIView * _contentView;
    NSLayoutConstraint * _contentWidthConstraint;
    UIDatePicker * _datePicker;
    _UIDatePickerStyle * _datePickerStyle;
    UIView * _previousContentView;
    _UIRoundedRectShadowView * _shadowView;
}

@property (nonatomic, readonly) UIView *accessoryView;
@property (nonatomic) bool accessoryViewIgnoresDefaultInsets;
@property (nonatomic, readonly) UIView *backgroundView;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentBounds;
@property (nonatomic, readonly) NSLayoutConstraint *contentHeightConstraint;
@property (nonatomic, readonly) UIView *contentView;
@property (nonatomic, readonly) NSLayoutConstraint *contentWidthConstraint;
@property (nonatomic, readonly) UIDatePicker *datePicker;
@property (nonatomic, readonly) _UIDatePickerStyle *datePickerStyle;
@property (nonatomic, readonly) UIView *previousContentView;
@property (nonatomic, readonly) _UIRoundedRectShadowView *shadowView;

- (void).cxx_destruct;
- (id)accessoryView;
- (bool)accessoryViewIgnoresDefaultInsets;
- (id)backgroundView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentBounds;
- (id)contentHeightConstraint;
- (id)contentView;
- (id)contentWidthConstraint;
- (id)datePicker;
- (id)datePickerStyle;
- (void)datePickerTransitionAnimation;
- (void)datePickerTransitionCompletion;
- (id)initWithDatePicker:(id)arg1 accessoryView:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize { double x1; double x2; })preferredContentSize;
- (struct CGSize { double x1; double x2; })preferredPlatterSize;
- (void)prepareDatePickerTransitionWithDatePicker:(id)arg1;
- (id)previousContentView;
- (void)replaceDatePicker:(id)arg1;
- (void)setAccessoryViewIgnoresDefaultInsets:(bool)arg1;
- (void)setContentBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)shadowView;
- (void)updateConstraints;

@end

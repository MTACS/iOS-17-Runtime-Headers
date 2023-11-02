
@interface HUServiceDetailsHeaderCell : UITableViewCell <HUCellProtocol> {
    NSLayoutConstraint * _actionBottomConstraint;
    UIButton * _actionButton;
    UIActivityIndicatorView * _checkingForUpdateSpinner;
    NSArray * _hiddenMessageTextViewConstraints;
    HFItem * _item;
    NSLayoutConstraint * _messageBottomConstraint;
    UITextView * _messageTextView;
    <HUResizableCellDelegate> * _resizingDelegate;
    NSLayoutConstraint * _spinnerBottomConstraint;
    UILabel * _titleLabel;
    UIStackView * _titleSpinnerStackView;
    NSArray * _visibleMessageTextViewConstraints;
}

@property (nonatomic, retain) NSLayoutConstraint *actionBottomConstraint;
@property (nonatomic, retain) UIButton *actionButton;
@property (nonatomic, retain) UIActivityIndicatorView *checkingForUpdateSpinner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *hiddenMessageTextViewConstraints;
@property (nonatomic, retain) HFItem *item;
@property (nonatomic, retain) NSLayoutConstraint *messageBottomConstraint;
@property (nonatomic, retain) UITextView *messageTextView;
@property (nonatomic) <HUResizableCellDelegate> *resizingDelegate;
@property (nonatomic, retain) NSLayoutConstraint *spinnerBottomConstraint;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIStackView *titleSpinnerStackView;
@property (nonatomic, retain) NSArray *visibleMessageTextViewConstraints;

+ (bool)requiresConstraintBasedLayout;

- (void).cxx_destruct;
- (void)_configureConstraints;
- (id)_hiddenMessageTextViewConstraints;
- (void)_setContinuousCornerRadius:(double)arg1;
- (void)_setCornerRadius:(double)arg1;
- (void)_updateErrorLabelConstraints;
- (id)_visibleMessageTextViewConstraints;
- (id)actionBottomConstraint;
- (id)actionButton;
- (id)checkingForUpdateSpinner;
- (id)hiddenMessageTextViewConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (id)item;
- (id)messageBottomConstraint;
- (id)messageTextView;
- (id)resizingDelegate;
- (void)setActionBottomConstraint:(id)arg1;
- (void)setActionButton:(id)arg1;
- (void)setCheckingForUpdateSpinner:(id)arg1;
- (void)setHiddenMessageTextViewConstraints:(id)arg1;
- (void)setItem:(id)arg1;
- (void)setMessageBottomConstraint:(id)arg1;
- (void)setMessageTextView:(id)arg1;
- (void)setResizingDelegate:(id)arg1;
- (void)setSpinnerBottomConstraint:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setTitleSpinnerStackView:(id)arg1;
- (void)setVisibleMessageTextViewConstraints:(id)arg1;
- (id)spinnerBottomConstraint;
- (id)titleLabel;
- (id)titleSpinnerStackView;
- (void)updateUIWithAnimation:(bool)arg1;
- (id)visibleMessageTextViewConstraints;

@end

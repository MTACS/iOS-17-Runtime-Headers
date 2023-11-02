
@interface PKPaymentPassTableCell : PSTableCell <PKPaymentVerificationControllerDelegate> {
    UIControl * _actionButton;
    CALayer * _cardSnapshotMask;
    UIImageView * _cardSnapshotView;
    <PKPaymentPassTableCellDelegate> * _delegate;
    UILabel * _mainLabel;
    PKPaymentPass * _pass;
    PKPassView * _passView;
    PKPaymentApplication * _paymentApplication;
    long long  _settingsContext;
    bool  _showActionButton;
    bool  _showAddButton;
    bool  _showFullSeparatorInset;
    bool  _showSnapshotSpinner;
    bool  _showSpinner;
    bool  _showState;
    bool  _showSubTitle;
    unsigned int  _snapshotCounter;
    UIActivityIndicatorView * _snapshotSpinner;
    UIActivityIndicatorView * _spinner;
    UILabel * _subTextLabel;
    PKPaymentVerificationController * _verificationController;
    UIViewController * _verificationViewController;
}

@property (nonatomic, readonly) UIControl *actionButton;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKPaymentPassTableCellDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UILabel *mainLabel;
@property (nonatomic, readonly, retain) PKPaymentPass *pass;
@property (nonatomic, readonly) PKPassFaceViewRendererState *rendererState;
@property (nonatomic) bool showAddButton;
@property (nonatomic) bool showSubTitle;
@property (nonatomic, readonly) UILabel *subTextLabel;
@property (readonly) Class superclass;

+ (double)heightForCellWithMinimum:(double)arg1 hasSubTitle:(bool)arg2;
+ (id)subTitleFont;
+ (id)titleFont;

- (void).cxx_destruct;
- (void)_addButtonPressed:(id)arg1;
- (void)_configureActionButtonWithTitle:(id)arg1;
- (void)_configureCellWithSpecifier:(id)arg1;
- (void)_configureMainLabelWithText:(id)arg1;
- (void)_configureSubTextLabelWithText:(id)arg1 textColor:(id)arg2;
- (id)_stringForPassState:(unsigned long long)arg1;
- (void)_verifyButtonPressed:(id)arg1;
- (id)actionButton;
- (void)dealloc;
- (id)delegate;
- (void)didChangeVerificationPresentation;
- (void)disableAddButton;
- (void)dismissVerificationViewControllerAnimated:(bool)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 specifier:(id)arg3;
- (void)layoutSubviews;
- (id)mainLabel;
- (id)pass;
- (void)pk_applyAppearance:(id)arg1;
- (id)pk_childrenForAppearance;
- (void)prepareForReuse;
- (void)presentVerificationViewController:(id)arg1 animated:(bool)arg2;
- (id)presentationContext;
- (id)rendererState;
- (void)setDelegate:(id)arg1;
- (void)setPass:(id)arg1 passView:(id)arg2;
- (void)setShowAddButton:(bool)arg1;
- (void)setShowSubTitle:(bool)arg1;
- (void)setSpecifier:(id)arg1;
- (void)showActivitySpinner:(bool)arg1;
- (bool)showAddButton;
- (bool)showSubTitle;
- (id)subTextLabel;
- (void)tintColorDidChange;
- (void)updateSubtitle;
- (void)updateSubtitleForTransitProperties;

@end

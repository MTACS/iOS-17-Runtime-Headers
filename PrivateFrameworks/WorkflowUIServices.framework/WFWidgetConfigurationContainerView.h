
@interface WFWidgetConfigurationContainerView : UIView {
    NSLayoutConstraint * _avoidingKeyboardConstraint;
    WFWidgetConfigurationCardView * _cardView;
    NSLayoutConstraint * _configuratedCardHeightConstraint;
    NSLayoutConstraint * _configuratedCardOriginXConstraint;
    NSLayoutConstraint * _configuratedCardOriginYConstraint;
    NSLayoutConstraint * _configuratedCardWidthConstraint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _configurationCardViewFrame;
    NSArray * _configuredCardLayoutConstraints;
    NSLayoutConstraint * _configuredSheetHeightConstraint;
    NSArray * _configuredSheetLayoutConstraints;
    NSLayoutConstraint * _configuredSheetOriginXConstraint;
    NSLayoutConstraint * _configuredSheetOriginYConstraint;
    NSLayoutConstraint * _configuredSheetWidthConstraint;
    NSArray * _defaultCardLayoutConstraints;
    <WFWidgetConfigurationContainerViewDelegate> * _delegate;
    NSLayoutConstraint * _preferredCardHeightLayoutConstraint;
    NSLayoutConstraint * _preferredCardWidthLayoutConstraint;
    unsigned long long  _widgetConfigurationStyle;
}

@property (nonatomic, readonly) NSLayoutConstraint *avoidingKeyboardConstraint;
@property (nonatomic, readonly) WFWidgetConfigurationCardView *cardView;
@property (nonatomic, readonly) NSLayoutConstraint *configuratedCardHeightConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *configuratedCardOriginXConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *configuratedCardOriginYConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *configuratedCardWidthConstraint;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } configurationCardViewFrame;
@property (nonatomic, readonly) NSArray *configuredCardLayoutConstraints;
@property (nonatomic, readonly) NSLayoutConstraint *configuredSheetHeightConstraint;
@property (nonatomic, readonly) NSArray *configuredSheetLayoutConstraints;
@property (nonatomic, readonly) NSLayoutConstraint *configuredSheetOriginXConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *configuredSheetOriginYConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *configuredSheetWidthConstraint;
@property (nonatomic, readonly) NSArray *defaultCardLayoutConstraints;
@property (nonatomic) <WFWidgetConfigurationContainerViewDelegate> *delegate;
@property (nonatomic, readonly) NSLayoutConstraint *preferredCardHeightLayoutConstraint;
@property (nonatomic, readonly) NSLayoutConstraint *preferredCardWidthLayoutConstraint;
@property (nonatomic) unsigned long long widgetConfigurationStyle;

- (void).cxx_destruct;
- (id)avoidingKeyboardConstraint;
- (id)cardView;
- (id)configuratedCardHeightConstraint;
- (id)configuratedCardOriginXConstraint;
- (id)configuratedCardOriginYConstraint;
- (id)configuratedCardWidthConstraint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })configurationCardViewFrame;
- (void)configureConstraints;
- (id)configuredCardLayoutConstraints;
- (id)configuredSheetHeightConstraint;
- (id)configuredSheetLayoutConstraints;
- (id)configuredSheetOriginXConstraint;
- (id)configuredSheetOriginYConstraint;
- (id)configuredSheetWidthConstraint;
- (id)defaultCardLayoutConstraints;
- (id)delegate;
- (id)initWithCardView:(id)arg1 preferredSize:(struct CGSize { double x1; double x2; })arg2;
- (void)keyboardWillChangeFrame:(id)arg1;
- (id)preferredCardHeightLayoutConstraint;
- (id)preferredCardWidthLayoutConstraint;
- (void)requestDismissal;
- (void)setConfigurationCardViewFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setWidgetConfigurationStyle:(unsigned long long)arg1;
- (void)setupConfiguredCardFrameConstraints;
- (void)setupConfiguredSheetFrameConstraints;
- (void)setupDefaultConstraintsWithPreferredSize:(struct CGSize { double x1; double x2; })arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (unsigned long long)widgetConfigurationStyle;

@end

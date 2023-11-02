
@interface FCUIActivityPickerEducationCardView : UIView <FCUIContentSizeCategoryAdjusting> {
    bool  _adjustsFontForContentSizeCategory;
    MTMaterialView * _backgroundMaterialView;
    UILabel * _bodyLabel;
    NSString * _bodyText;
    UIAction * _defaultAction;
    UITapGestureRecognizer * _defaultTapGesture;
    UIAction * _dismissAction;
    _FCUIActivityPickerOnboardingDismissControl * _dismissControl;
    NSStringDrawingContext * _drawingContext;
    UILabel * _headlineLabel;
    NSString * _headlineText;
    NSString * _preferredContentSizeCategory;
    UIView * _prominentView;
    bool  _textAttributesValid;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (nonatomic, readonly, copy) NSString *bodyText;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, copy) UIAction *defaultAction;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) UIAction *dismissAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *headlineText;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly) UIView *prominentView;
@property (readonly) Class superclass;

+ (id)_defaultPromimentViewWithBaubleDescriptions:(id)arg1;
+ (id)_preferredFont:(bool)arg1 textStyle:(id)arg2 weight:(double)arg3 additionalTraits:(unsigned int)arg4;
+ (id)defaultEducationCardViewActivityIdentifiers;
+ (id)defaultEducationCardViewFallbackBaubleDescriptions;
+ (id)defaultEducationCardViewWithProminentViewBaubleDescriptions:(id)arg1 dismissAction:(id)arg2;

- (void).cxx_destruct;
- (void)_configureBackgroundMaterialViewIfNecessary;
- (void)_configureBodyLabelIfNecessary;
- (void)_configureDismissControlIfNecessaryWithAction:(id)arg1;
- (void)_configureHeadlineLabelIfNecessary;
- (void)_handleDefaultTap:(id)arg1;
- (void)_layoutSubviewInBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 measuringOnly:(out struct CGSize { double x1; double x2; }*)arg2;
- (bool)_needsTextAttributesUpdate;
- (void)_setNeedsTextAttributesUpdate;
- (void)_updateTextAttributes;
- (void)_updateTextAttributesForBodyLabel;
- (void)_updateTextAttributesForHeadlineLabel;
- (void)_updateTextAttributesIfNecessary;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)bodyText;
- (id)defaultAction;
- (id)dismissAction;
- (id)headlineText;
- (id)initWithProminentView:(id)arg1 headlineText:(id)arg2 bodyText:(id)arg3 dismissAction:(id)arg4;
- (void)layoutSubviews;
- (id)preferredContentSizeCategory;
- (id)prominentView;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setDefaultAction:(id)arg1;
- (void)setPreferredContentSizeCategory:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end

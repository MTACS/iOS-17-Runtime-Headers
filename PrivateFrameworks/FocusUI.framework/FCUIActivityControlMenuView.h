
@interface FCUIActivityControlMenuView : UIView <FCUIContentSizeCategoryAdjusting, MTVisualStylingRequiring, UIGestureRecognizerDelegate> {
    bool  _adjustsFontForContentSizeCategory;
    NSMutableDictionary * _categoriesToVisualStylingProviders;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    _FCUIActivityControlMenuFooterView * _footerView;
    NSArray * _menuItemViews;
    NSMutableArray * _outgoingMenuItemViews;
    UIGestureRecognizer * _pressGestureRecognizer;
    NSArray * _purgeableMenuItemViews;
}

@property (nonatomic) bool adjustsFontForContentSizeCategory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) UIAction *footerAction;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *menuAlternativeDescription;
@property (nonatomic, copy) NSArray *menuItemActions;
@property (nonatomic, readonly, copy) NSArray *menuItemElements;
@property (nonatomic, copy) NSString *preferredContentSizeCategory;
@property (nonatomic, readonly) UIGestureRecognizer *pressGestureRecognizer;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_configureFooterViewIfNecessary;
- (double)_continuousCornerRadius;
- (void)_handlePressGesture:(id)arg1;
- (id)_newMenuItemView;
- (void)_setContinuousCornerRadius:(double)arg1;
- (bool)_toggleHighlightForMenuElement:(id)arg1;
- (void)_updateVisualStylingOfView:(id)arg1 style:(long long)arg2 visualStylingProvider:(id)arg3 outgoingProvider:(id)arg4;
- (void)_visualStylingProvider:(id)arg1 didChangeForCategory:(long long)arg2 outgoingProvider:(id)arg3;
- (bool)adjustForContentSizeCategoryChange;
- (bool)adjustsFontForContentSizeCategory;
- (id)footerAction;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)menuAlternativeDescription;
- (id)menuItemActions;
- (id)menuItemElements;
- (id)pressGestureRecognizer;
- (id)requiredVisualStyleCategories;
- (void)setAdjustsFontForContentSizeCategory:(bool)arg1;
- (void)setFooterAction:(id)arg1;
- (void)setMenuAlternativeDescription:(id)arg1;
- (void)setMenuItemActions:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end

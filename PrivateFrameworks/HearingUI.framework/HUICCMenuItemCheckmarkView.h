
@interface HUICCMenuItemCheckmarkView : UIControl <MTVisualStylingRequiring> {
    NSMutableDictionary * _categoriesToVisualStylingProviders;
    UIImageView * _checkmarkView;
    UIView * _containerView;
    UISelectionFeedbackGenerator * _feedbackGenerator;
    UIView * _highlightedBackgroundView;
    CCUIMenuModuleItem * _menuItem;
    UILabel * _subtitleLabel;
    UILabel * _titleLabel;
    UIStackView * _verticalTitleStack;
}

@property (nonatomic, retain) NSMutableDictionary *categoriesToVisualStylingProviders;
@property (nonatomic, retain) UIImageView *checkmarkView;
@property (nonatomic, retain) UIView *containerView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UISelectionFeedbackGenerator *feedbackGenerator;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightedBackgroundView;
@property (nonatomic, retain) CCUIMenuModuleItem *menuItem;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (nonatomic, retain) UILabel *subtitleLabel;
@property (readonly) Class superclass;
@property (nonatomic, retain) UILabel *titleLabel;
@property (nonatomic, retain) UIStackView *verticalTitleStack;

- (void).cxx_destruct;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)categoriesToVisualStylingProviders;
- (id)checkmarkView;
- (id)containerView;
- (id)feedbackGenerator;
- (id)highlightedBackgroundView;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isAccessibilityElement;
- (id)menuItem;
- (id)requiredVisualStyleCategories;
- (void)setCategoriesToVisualStylingProviders:(id)arg1;
- (void)setCheckmarkView:(id)arg1;
- (void)setContainerView:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedBackgroundView:(id)arg1;
- (void)setMenuItem:(id)arg1;
- (void)setSubtitleLabel:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (void)setVerticalTitleStack:(id)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (id)subtitleLabel;
- (id)titleLabel;
- (id)verticalTitleStack;

@end

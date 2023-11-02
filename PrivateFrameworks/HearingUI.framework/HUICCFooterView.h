
@interface HUICCFooterView : UIView <HACCContentModule, MTVisualStylingRequiring> {
    UISelectionFeedbackGenerator * _feedbackGenerator;
    UIAction * _footerAction;
    UILabel * _footerLabel;
    UIView * _highlightedBackgroundView;
    <HACCContentModuleDelegate> * delegate;
    unsigned long long  module;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HACCContentModuleDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) UISelectionFeedbackGenerator *feedbackGenerator;
@property (nonatomic, copy) UIAction *footerAction;
@property (nonatomic, retain) UILabel *footerLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) UIView *highlightedBackgroundView;
@property (nonatomic) unsigned long long module;
@property (nonatomic) bool providesOwnSeparator;
@property (nonatomic, readonly, copy) NSArray *requiredVisualStyleCategories;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_openSettingsWithURL:(id)arg1;
- (id)accessibilityLabel;
- (unsigned long long)accessibilityTraits;
- (id)contentValue;
- (id)delegate;
- (bool)enabled;
- (id)feedbackGenerator;
- (id)footerAction;
- (id)footerLabel;
- (void)footerTapped:(id)arg1;
- (id)highlightedBackgroundView;
- (id)initWithModule:(unsigned long long)arg1;
- (bool)isAccessibilityElement;
- (bool)isHighlighted;
- (unsigned long long)module;
- (id)requiredVisualStyleCategories;
- (void)setDelegate:(id)arg1;
- (void)setFeedbackGenerator:(id)arg1;
- (void)setFooterAction:(id)arg1;
- (void)setFooterLabel:(id)arg1;
- (void)setHighlighted:(bool)arg1;
- (void)setHighlightedBackgroundView:(id)arg1;
- (void)setModule:(unsigned long long)arg1;
- (void)setVisualStylingProvider:(id)arg1 forCategory:(long long)arg2;
- (void)setupFooterActionIfNecessary;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)updateValue;

@end

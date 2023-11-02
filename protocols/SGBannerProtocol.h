
@protocol SGBannerProtocol <NSObject>

@required

- (long long)accessoryType;
- (NSString *)actionTitle;
- (NSAttributedString *)attributedSubtitle;
- (NSArray *)imageSGViews;
- (NSArray *)images;
- (SGSuggestionAction *)primaryAction;
- (void)setAccessoryType:(long long)arg1;
- (void)setActionTitle:(NSString *)arg1;
- (void)setAttributedSubtitle:(NSAttributedString *)arg1;
- (void)setImageSGViews:(NSArray *)arg1;
- (void)setImages:(NSArray *)arg1;
- (void)setPrimaryAction:(SGSuggestionAction *)arg1;
- (void)setSubtitle:(NSString *)arg1;
- (void)setTitle:(NSString *)arg1;
- (NSString *)subtitle;
- (NSString *)title;

@optional

- (double)actionButtonLeadingEdgeOffset;
- (long long)actionButtonType;
- (void)addTarget:(id)arg1 action:(SEL)arg2 forControlEvents:(unsigned long long)arg3;
- (UIColor *)backgroundColor;
- (UIVisualEffectView *)backgroundVisualEffectView;
- (SGBannerDividerParameter *)bannerDivider;
- (double)closeButtonXAnchorOffset;
- (<SGSuggestionDelegate> *)delegate;
- (SGSuggestionAction *)dismissAction;
- (NSArray *)iconSFSymbols;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;
- (void)invalidateBannerView;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })popoverSourceRect;
- (bool)prominentActionButton;
- (void)reload;
- (void)setActionButtonType:(long long)arg1;
- (void)setBackgroundColor:(UIColor *)arg1;
- (void)setBackgroundVisualEffectView:(UIVisualEffectView *)arg1;
- (void)setBannerDivider:(SGBannerDividerParameter *)arg1;
- (void)setCloseButtonXAnchorOffset:(double)arg1;
- (void)setDelegate:(id <SGSuggestionDelegate>)arg1;
- (void)setDismissAction:(SGSuggestionAction *)arg1;
- (void)setIconSFSymbols:(NSArray *)arg1;
- (void)setProminentActionButton:(bool)arg1;
- (void)setSuggestion:(id <SGSuggestion>)arg1;
- (void)setSuggestionCategorySupportsBatchDismissal:(bool)arg1;
- (void)setSuggestionStore:(SGSuggestionStore *)arg1;
- (<SGSuggestion> *)suggestion;
- (bool)suggestionCategorySupportsBatchDismissal;
- (SGSuggestionStore *)suggestionStore;

@end

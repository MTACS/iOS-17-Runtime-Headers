
@protocol SGSuggestion <NSObject>

@required

- (void)setSuggestionDelegate:(id <SGSuggestionDelegate>)arg1;
- (<SGSuggestionCategory> *)suggestionCategory;
- (<SGSuggestionDelegate> *)suggestionDelegate;
- (SGSuggestionAction *)suggestionPrimaryAction;
- (NSString *)suggestionTitle;

@optional

- (long long)suggestionActionButtonType;
- (NSAttributedString *)suggestionAttributedSubtitle;
- (UIColor *)suggestionBackgroundColor;
- (UIVisualEffectView *)suggestionBackgroundVisualEffectView;
- (SGSuggestionAction *)suggestionDismissAction;
- (SGBannerDividerParameter *)suggestionDivider;
- (NSString *)suggestionIconSFSymbol;
- (UIImage *)suggestionImage;
- (UIView *)suggestionImageSGView;
- (<SGSuggestionList> *)suggestionList;
- (UIViewController *)suggestionPrimaryActionViewController;
- (bool)suggestionProminentActionButton;
- (NSString *)suggestionSubtitle;

@end

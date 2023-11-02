
@protocol SGSuggestionCategory <NSObject>

@required

- (NSString *)suggestionCategoryId;
- (UIImage *)suggestionCategoryImage;
- (NSString *)suggestionCategoryLocalizedCountOfItems:(NSArray *)arg1;
- (NSString *)suggestionCategorySubtitleForItems:(NSArray *)arg1;
- (NSString *)suggestionCategoryTitle;
- (NSString *)suggestionCategoryTitleForItems:(NSArray *)arg1;

@optional

- (long long)suggestionCategoryActionButtonType;
- (UIColor *)suggestionCategoryBackgroundColor;
- (UIVisualEffectView *)suggestionCategoryBackgroundVisualEffectView;
- (bool)suggestionCategoryCoalesceImages;
- (SGBannerDividerParameter *)suggestionCategoryDivider;
- (NSString *)suggestionCategoryIconSFSymbol;
- (UIView *)suggestionCategoryImageSGView;
- (bool)suggestionCategorySupportsBatchDismissal;
- (id /* block */)suggestionComparator:(void *)arg1; // needs 1 arg types, found 6: id /* block */, id, id, void*, id, SEL

@end

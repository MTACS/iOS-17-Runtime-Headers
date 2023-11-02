
@protocol SFAppSuggestionBannerDelegate <NSObject>

@required

- (void)dismissAppSuggestionBanner:(SFPinnableBanner<SFAppSuggestionBanner> *)arg1;
- (void)setAppSuggestionBanner:(SFPinnableBanner<SFAppSuggestionBanner> *)arg1 isPinned:(bool)arg2;
- (bool)shouldBlockAppSuggestionBanner:(SFPinnableBanner<SFAppSuggestionBanner> *)arg1;

@end

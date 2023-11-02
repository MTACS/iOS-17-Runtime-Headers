
@interface SFHighlightBannerTracker : WBSBannerTracker

+ (id)sharedTracker;

- (void)blockBannerForHighlight:(id)arg1;
- (id)categoryName;
- (void)isBannerBlockedForHighlight:(id)arg1 completion:(id /* block */)arg2;
- (void)unblockBannerForHighlight:(id)arg1;

@end

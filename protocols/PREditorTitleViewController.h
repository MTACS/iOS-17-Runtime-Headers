
@protocol PREditorTitleViewController <NSObject>

@required

- (UIFont *)pr_baseFont;
- (<PREditorTitleViewControllerTransitioning> *)pr_beginInteractiveTransitionToBaseFont:(UIFont *)arg1 vibrancyConfiguration:(BSUIVibrancyConfiguration *)arg2 cachingVibrancyTransitionProvider:(CSCachingVibrancyTransitionProvider *)arg3;
- (void)pr_setBackgroundType:(long long)arg1;
- (void)pr_setDisplayDate:(NSDate *)arg1;
- (void)pr_setDisplayString:(NSString *)arg1;
- (void)pr_setElements:(unsigned long long)arg1;
- (void)pr_setStylingFromTitleStyleConfiguration:(PRPosterTitleStyleConfiguration *)arg1 withExtensionBundleURL:(NSURL *)arg2 forRole:(NSString *)arg3;
- (void)pr_setUsesEditingLayout:(bool)arg1;

@end

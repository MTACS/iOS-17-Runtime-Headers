
@interface DDURLPreviewAction : DDPreviewAction

+ (bool)handlesUrl:(id)arg1 result:(struct __DDResult { }*)arg2;
+ (id)validatedURLWithURL:(id)arg1 result:(struct __DDResult { }*)arg2;

- (id)commitURL;
- (id)createViewController;
- (id)menuActions;
- (bool)requiresEmbeddingNavigationController;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)setPreviewMode:(bool)arg1;
- (bool)showMenuTitle;

@end


@interface DDAppleStorePreviewAction : DDPreviewAction

+ (bool)handlesUrl:(id)arg1 result:(struct __DDResult { }*)arg2;
+ (id)urlForURL:(id)arg1 result:(struct __DDResult { }*)arg2;

- (id)commitURL;
- (id)createViewController;
- (id)menuActions;
- (id)previewActionsWithValidatedURL:(id)arg1;
- (bool)showMenuTitle;

@end

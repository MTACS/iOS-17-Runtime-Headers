
@interface DDRemoteAction : DDPreviewAction

+ (id)viewControllerProviderClass;

- (id)createViewController;
- (id)previewActions;
- (void)setPreviewMode:(bool)arg1;

@end

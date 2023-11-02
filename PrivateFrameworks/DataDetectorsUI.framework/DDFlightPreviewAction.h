
@interface DDFlightPreviewAction : DDRemoteAction {
    bool  _previewModeSet;
}

+ (id)viewControllerProviderClass;

- (id)expandViewController;
- (id)menuActionClasses;
- (id)previewActions;
- (void)setPreviewMode:(bool)arg1;
- (struct CGSize { double x1; double x2; })suggestedContentSize;
- (bool)wantsCustomViewControllerCommit;

@end

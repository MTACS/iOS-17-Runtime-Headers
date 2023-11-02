
@protocol CSRemoteContentInlineProvidingManager <NSObject>

@required

- (bool)isInlineRemoteContentHidden;
- (void)presentInlineRemoteContent:(CSRemoteContentInlineViewController *)arg1 animatePresentation:(bool)arg2;
- (void)removeInlineRemoteContentWithAnimatedDismissal:(bool)arg1;
- (void)setInlineRemoteContentHidden:(bool)arg1;

@end

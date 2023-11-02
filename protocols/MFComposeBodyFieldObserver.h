
@protocol MFComposeBodyFieldObserver <MSComposeBodyFieldObserver>

@required

- (void)attachmentTapped:(NSString *)arg1;
- (void)composeBodyFieldIsDirtyChanged:(bool)arg1;
- (void)composeBodyFieldSelectedLinkTextDidChange;
- (void)composeBodyFieldSelectionContainsLinkStateDidChange:(bool)arg1;
- (void)composeBodyIsEmpty:(bool)arg1;
- (void)selectedAttachmentIdentifiersDidChange:(NSArray *)arg1;

@end


@protocol QLRemotePreviewHost <NSObject>

@required

- (void)previewControllerDidUpdatePreferredContentSize:(NSValue *)arg1;
- (void)previewControllerDidUpdateTitle:(NSString *)arg1;
- (void)previewControllerWantsFullScreen:(bool)arg1;

@end

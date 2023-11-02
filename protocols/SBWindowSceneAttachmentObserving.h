
@protocol SBWindowSceneAttachmentObserving <NSObject>

@required

- (void)windowSceneDidConnect:(SBWindowScene *)arg1;
- (void)windowSceneDidDisconnect:(SBWindowScene *)arg1;

@end

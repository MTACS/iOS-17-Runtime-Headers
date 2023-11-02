
@protocol SBAssistantWindowProtocol <NSObject>

@required

- (SBAssistantRootViewController *)assistantRootViewController;
- (void)setTouchesPassThroughToSpringBoard:(bool)arg1;
- (bool)touchesPassThroughToSpringBoard;

@end

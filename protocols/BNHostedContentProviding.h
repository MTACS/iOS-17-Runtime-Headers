
@protocol BNHostedContentProviding <NSObject>

@required

- (bool)providesHostedContent;
- (UIViewController *)viewController;

@optional

- (void)draggingDidBeginWithGestureProxy:(id <BNPanGestureProxy>)arg1;

@end

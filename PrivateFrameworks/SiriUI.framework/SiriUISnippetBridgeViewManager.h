
@interface SiriUISnippetBridgeViewManager : NSObject

+ (id)sharedInstance;

- (void)insertBridgeViewIfNecessaryForCell:(id)arg1 controller:(id)arg2 currentSnippet:(id)arg3 previousSnippet:(id)arg4 bridgeSize:(struct CGSize { double x1; double x2; })arg5;
- (void)removeBridgeViewsFromView:(id)arg1;

@end

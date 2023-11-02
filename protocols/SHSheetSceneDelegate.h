
@protocol SHSheetSceneDelegate <NSObject>

@required

- (void)scene:(SHSheetScene *)arg1 didReceiveAction:(SHSheetAction *)arg2;
- (void)scene:(SHSheetScene *)arg1 didReceiveContentUpdateNotification:(SHSheetContentUpdateNotification *)arg2;
- (void)scene:(SHSheetScene *)arg1 didReceiveDraggingAction:(SHSheetDraggingAction *)arg2;
- (void)scene:(SHSheetScene *)arg1 didReceiveSuggestionAction:(SHSheetSuggestionAction *)arg2;

@optional

- (void)sceneDidBecomeActive:(SHSheetScene *)arg1;

@end

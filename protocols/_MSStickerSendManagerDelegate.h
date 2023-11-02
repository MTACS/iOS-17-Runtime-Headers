
@protocol _MSStickerSendManagerDelegate <NSObject>

@required

- (void)canShowBrowserForPluginIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)insertSticker:(void *)arg1 forceStage:(void *)arg2 frameInScreenCoordinates:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: <MSStickerPrivate> *, bool, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)showBrowserForPluginIdentifier:(void *)arg1 style:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)startDragSticker:(void *)arg1 frameInRemoteView:(void *)arg2 fence:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: <MSStickerPrivate> *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)stickerDragCanceled;
- (void)stickerDragMoved:(void *)arg1 frameInRemoteView:(void *)arg2 rotation:(void *)arg3 scale:(void *)arg4 fence:(void *)arg5 completionHandler:(void *)arg6; // needs 6 arg types, found 12: <MSStickerPrivate> *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, double, double, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)stickerDruidDragEndedWithMSSticker:(id <MSStickerPrivate>)arg1;
- (void)stickerDruidDragStarted;

@end

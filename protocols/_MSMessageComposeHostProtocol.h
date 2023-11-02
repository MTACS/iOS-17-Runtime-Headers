
@protocol _MSMessageComposeHostProtocol <NSObject>

@required

- (void)_canShowBrowserForPluginIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_dismiss;
- (void)_dismissAndPresentPhotosApp;
- (void)_dragMediaItemCanceled;
- (void)_dragMediaItemMoved:(void *)arg1 frameInRemoteView:(void *)arg2 rotation:(void *)arg3 scale:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: _MSMessageMediaPayload *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, double, double, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)_openURL:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSURL *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_presentAlertWithTitle:(void *)arg1 message:(void *)arg2 buttonTitle:(void *)arg3 completion:(void *)arg4; // needs 4 arg types, found 8: NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_presentAlertWithTitle:(void *)arg1 message:(void *)arg2 buttonTitle:(void *)arg3 destructiveButtonTitle:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 10: NSString *, NSString *, NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_remoteViewNeedsSizeMatchBeforeSnapshotSwap;
- (void)_remoteViewProvidesExplicitSizeSnapshot;
- (void)_requestFullScreenModalPresentationWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_requestHostSceneIdentifierWithCompletion:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, void*
- (void)_requestPresentationStyle:(unsigned long long)arg1;
- (void)_requestPresentationWithStickerType:(NSString *)arg1 identifier:(NSUUID *)arg2;
- (void)_requestStickerExtensionMetadataDictionary:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)_showBrowserForPluginIdentifier:(void *)arg1 style:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: NSString *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)_stageAppItem:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MSMessage *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_stageMediaItem:(void *)arg1 skipShelf:(void *)arg2 forceStage:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 9: _MSMessageMediaPayload *, bool, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_stageRichLink:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: MSRichLink *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_startDragMediaItem:(void *)arg1 frameInRemoteView:(void *)arg2 fence:(void *)arg3 completionHandler:(void *)arg4; // needs 4 arg types, found 10: _MSMessageMediaPayload *, struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }, BKSAnimationFenceHandle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)_stickerDruidDragEndedWithPayload:(_MSMessageMediaPayload *)arg1;
- (void)_stickerDruidDragEndedWithPayload:(_MSMessageMediaPayload *)arg1 pluginIdentifier:(NSString *)arg2;
- (void)_stickerDruidDragStarted;
- (void)_updateSnapshotForNextLaunch:(UIImage *)arg1;

@optional

- (void)_contentDidLoad;
- (void)_presentAlertSheetWith:(void *)arg1 styles:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSArray *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, int, void*
- (void)_removeAssetArchiveWithIdentifier:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)_requestResize;
- (void)_stageAssetArchive:(void *)arg1 skipShelf:(void *)arg2 completionHandler:(void *)arg3; // needs 3 arg types, found 8: NSData *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

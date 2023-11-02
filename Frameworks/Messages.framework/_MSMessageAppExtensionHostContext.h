
@interface _MSMessageAppExtensionHostContext : NSExtensionContext <_MSMessageComposeHostImplProtocol> {
    <_MSMessageComposeHostProtocol> * _delegate;
    id /* block */  _queuedCanShowBrowserCompletion;
    NSString * _queuedCanShowBrowserPluginIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_MSMessageComposeHostProtocol> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_allowedItemPayloadClasses;
+ (id)_extensionAuxiliaryHostProtocol;
+ (id)_extensionAuxiliaryVendorProtocol;
+ (id)_extensionContextHostProtocolAllowedClassesForItems;

- (void).cxx_destruct;
- (void)_canShowBrowserForPluginIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (void)_contentDidLoad;
- (void)_dismiss;
- (void)_dismissAndPresentPhotosApp;
- (void)_dragMediaItemCanceled;
- (void)_dragMediaItemMoved:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotation:(double)arg3 scale:(double)arg4 completionHandler:(id /* block */)arg5;
- (void)_openURL:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_presentAlertSheetWith:(id)arg1 styles:(id)arg2 completion:(id /* block */)arg3;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(id /* block */)arg4;
- (void)_presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 destructiveButtonTitle:(id)arg4 completion:(id /* block */)arg5;
- (void)_remoteViewDidBecomeReadyForDisplay;
- (void)_remoteViewNeedsSizeMatchBeforeSnapshotSwap;
- (void)_remoteViewProvidesExplicitSizeSnapshot;
- (void)_removeAssetArchiveWithIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)_requestFullScreenModalPresentationWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)_requestHostSceneIdentifierWithCompletion:(id /* block */)arg1;
- (void)_requestPresentationStyle:(unsigned long long)arg1;
- (void)_requestPresentationWithStickerType:(id)arg1 identifier:(id)arg2;
- (void)_requestResize;
- (void)_requestStickerExtensionMetadataDictionary:(id /* block */)arg1;
- (void)_showBrowserForPluginIdentifier:(id)arg1 style:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)_stageAppItem:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_stageAssetArchive:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_stageMediaItem:(id)arg1 skipShelf:(bool)arg2 forceStage:(bool)arg3 completionHandler:(id /* block */)arg4;
- (void)_stageRichLink:(id)arg1 skipShelf:(bool)arg2 completionHandler:(id /* block */)arg3;
- (void)_startDragMediaItem:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fence:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)_stickerDruidDragEndedWithPayload:(id)arg1;
- (void)_stickerDruidDragEndedWithPayload:(id)arg1 pluginIdentifier:(id)arg2;
- (void)_stickerDruidDragStarted;
- (void)_updateSnapshotForNextLaunch:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end

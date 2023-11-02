
@interface _MSStickerSendManager : NSObject <_MSStickerSendManagerDelegate> {
    <_MSStickerSendManagerDelegate> * _delegate;
    NSString * _hostBundleID;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_MSStickerSendManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *hostBundleID;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)canShowBrowserForPluginIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)delegate;
- (id)hostBundleID;
- (void)insertSticker:(id)arg1 forceStage:(bool)arg2 frameInScreenCoordinates:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 completionHandler:(id /* block */)arg4;
- (void)setDelegate:(id)arg1;
- (void)setHostBundleID:(id)arg1;
- (void)showBrowserForPluginIdentifier:(id)arg1 style:(unsigned long long)arg2 completion:(id /* block */)arg3;
- (void)startDragSticker:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 fence:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)stickerDragCanceled;
- (void)stickerDragMoved:(id)arg1 frameInRemoteView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 rotation:(double)arg3 scale:(double)arg4 fence:(id)arg5 completionHandler:(id /* block */)arg6;
- (void)stickerDruidDragEndedWithMSSticker:(id)arg1;
- (void)stickerDruidDragStarted;

@end

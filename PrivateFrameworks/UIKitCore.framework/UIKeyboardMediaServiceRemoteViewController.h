
@interface UIKeyboardMediaServiceRemoteViewController : _UIRemoteViewController <UIKeyboardMediaHostProtocol, _UIStickerPickerHostProtocol> {
    <UIKeyboardMediaServiceRemoteViewControllerDelegate> * _delegate;
    bool  _shownInline;
}

@property (getter=_isShownInline, setter=_setShownInline:, nonatomic) bool _shownInline;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIKeyboardMediaServiceRemoteViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)__shouldHostRemoteTextEffectsWindow;
+ (id)exportedInterface;
+ (id)requestCardViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)requestInlineViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)__shouldRemoteViewControllerFenceGeometryChange:(const struct { int x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGPoint { double x_3_1_1; double x_3_1_2; } x3; struct CGSize { double x_4_1_1; double x_4_1_2; } x4; struct CGPoint { double x_5_1_1; double x_5_1_2; } x5; struct CATransform3D { double x_6_1_1; double x_6_1_2; double x_6_1_3; double x_6_1_4; double x_6_1_5; double x_6_1_6; double x_6_1_7; double x_6_1_8; double x_6_1_9; double x_6_1_10; double x_6_1_11; double x_6_1_12; double x_6_1_13; double x_6_1_14; double x_6_1_15; double x_6_1_16; } x6; id x7; id x8; id x9; id x10; }*)arg1 forAncestor:(id)arg2;
- (bool)_canShowWhileLocked;
- (bool)_isShownInline;
- (void)_setShownInline:(bool)arg1;
- (id)delegate;
- (void)dismissCard;
- (void)draggedStickerToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)pasteImageAtFileHandle:(id)arg1;
- (void)presentCard;
- (void)remoteHandlesRecentsStickerDonationWithCompletionHandler:(id /* block */)arg1;
- (void)requestInsertionPointCompletion:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setHostBundleID:(id)arg1;
- (void)stageSticker:(id)arg1;
- (void)stageStickerWithFileHandle:(id)arg1 url:(id)arg2 accessibilityLabel:(id)arg3;
- (void)stageStickerWithIdentifier:(id)arg1 representations:(id)arg2 name:(id)arg3 externalURI:(id)arg4 accessibilityLabel:(id)arg5;
- (void)stickerPickerCardDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

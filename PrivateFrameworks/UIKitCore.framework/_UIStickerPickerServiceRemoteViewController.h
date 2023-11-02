
@interface _UIStickerPickerServiceRemoteViewController : _UIRemoteViewController {
    <_UIStickerPickerRemoteViewControllerDelegate> * _delegate;
}

@property (nonatomic) <_UIStickerPickerRemoteViewControllerDelegate> *delegate;

+ (id)exportedInterface;
+ (id)requestCardViewControllerWithConnectionHandler:(id /* block */)arg1;
+ (id)serviceViewControllerInterface;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)delegate;
- (void)dismissCard;
- (void)presentCard;
- (void)remoteHandlesRecentsStickerDonationWithCompletionHandler:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)stageSticker:(id)arg1;
- (void)stageStickerWithIdentifier:(id)arg1 representations:(id)arg2 name:(id)arg3 externalURI:(id)arg4 accessibilityLabel:(id)arg5;
- (void)stickerPickerCardDidLoad;
- (void)viewServiceDidTerminateWithError:(id)arg1;

@end

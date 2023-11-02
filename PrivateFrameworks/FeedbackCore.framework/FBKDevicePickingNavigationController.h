
@interface FBKDevicePickingNavigationController : UINavigationController <FBKDeviceChoiceDelegate> {
    id /* block */  _completion;
}

@property (nonatomic, copy) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)completion;
- (void)deviceChoicesController:(id)arg1 didChooseDevices:(id)arg2;
- (void)deviceChoicesControllerDidCancelWithController:(id)arg1;
- (id)initWithDeviceChoices:(id)arg1 allowsMultipleSelection:(bool)arg2 completion:(id /* block */)arg3;
- (void)pairedDevicesDidChangeWithAddedDevice:(id)arg1 removed:(id)arg2;
- (void)pairingViewDidCancel;
- (void)pairingViewDidClose;
- (void)setCompletion:(id /* block */)arg1;

@end

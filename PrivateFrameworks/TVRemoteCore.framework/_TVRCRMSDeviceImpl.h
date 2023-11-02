
@interface _TVRCRMSDeviceImpl : NSObject <_TVRCDeviceImpl, _TVRCRMSDeviceWrapperDelegate> {
    TVRXDevice * _device;
    _TVRCRMSDeviceWrapper * _deviceWrapper;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) TVRXDevice *device;
@property (nonatomic, retain) _TVRCRMSDeviceWrapper *deviceWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)implWithDevice:(id)arg1;

- (void).cxx_destruct;
- (id)alternateIdentifiers;
- (void)connect;
- (void)connectedToDevice:(id)arg1;
- (long long)connectionType;
- (id)device;
- (void)deviceEncounteredAuthenticationChallenge:(id)arg1;
- (void)deviceUpdatedSupportedButtons:(id)arg1;
- (id)deviceWrapper;
- (void)disconnect;
- (void)disconnectedFromDevice:(id)arg1 error:(id)arg2;
- (id)identifier;
- (id)initWithDevice:(id)arg1;
- (bool)isPaired;
- (id)keyboardController;
- (id)model;
- (id)name;
- (unsigned long long)pairingCapability;
- (void)sendButtonEvent:(id)arg1;
- (void)sendGameControllerEvent:(id)arg1;
- (void)sendTouchEvent:(id)arg1;
- (void)setAuthenticationSupported:(bool)arg1;
- (void)setDevice:(id)arg1;
- (void)setDeviceWrapper:(id)arg1;
- (id)supportedButtons;
- (bool)supportsFindMyRemote;
- (bool)supportsTouchEvents;

@end

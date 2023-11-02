
@interface TVRCMatchPointDeviceImpl : NSObject <TVRCHMServiceWrapperDelegate, _TVRCDeviceImpl> {
    TVRXDevice * _device;
    TVRCHMServiceWrapper * _service;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) TVRXDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TVRCHMServiceWrapper *service;
@property (readonly) Class superclass;

+ (id)implWithService:(id)arg1;

- (void).cxx_destruct;
- (id)alternateIdentifiers;
- (void)connect;
- (void)connectedToService:(id)arg1;
- (long long)connectionType;
- (id)device;
- (void)disconnect;
- (void)disconnectedFromService:(id)arg1 error:(id)arg2;
- (id)identifier;
- (id)initWithService:(id)arg1;
- (id)keyboardController;
- (id)model;
- (id)name;
- (unsigned long long)pairingCapability;
- (void)sendButtonEvent:(id)arg1;
- (void)sendGameControllerEvent:(id)arg1;
- (void)sendTouchEvent:(id)arg1;
- (id)service;
- (void)service:(id)arg1 updatedName:(id)arg2;
- (void)setAuthenticationSupported:(bool)arg1;
- (void)setDevice:(id)arg1;
- (void)setService:(id)arg1;
- (id)supportedButtons;
- (bool)supportsFindMyRemote;
- (bool)supportsTouchEvents;

@end

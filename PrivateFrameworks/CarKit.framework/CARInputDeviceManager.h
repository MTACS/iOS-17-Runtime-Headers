
@interface CARInputDeviceManager : NSObject <CARInputDeviceTouchpadDelegate> {
    NSArray * _inputDevices;
    CARSession * _session;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *inputDevices;
@property (nonatomic, readonly) CARSession *session;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_enumerateTouchpadsUsingBlock:(id /* block */)arg1;
- (id)_generateInputDevicesWithEndpointInputDevices:(id)arg1 screenIDs:(id)arg2 vehicleInformation:(id)arg3;
- (id)_initWithInputDevices:(id)arg1 session:(id)arg2;
- (id)_inputDeviceWithSenderID:(unsigned long long)arg1;
- (id)_touchpadSettingsFromVehicleInformation:(id)arg1;
- (void)_updateTouchpadSettings:(id)arg1;
- (id)description;
- (id)initWithEndpointInputDevices:(id)arg1 screenIDs:(id)arg2 vehicleInformation:(id)arg3 session:(id)arg4;
- (id)inputDevices;
- (void)performHapticType:(unsigned long long)arg1 deviceUUID:(id)arg2;
- (id)session;
- (bool)touchpadCharacterRecognitionSupported;
- (id)touchpadWithSenderID:(unsigned long long)arg1;
- (void)vehicleInformationChanged:(id)arg1;

@end

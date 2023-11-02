
@interface REBluetoothPredictor : REPredictor <REBluetoothPredictorProperties> {
    REUpNextScheduler * _bluetoothNotificationScheduler;
    REDuetContextQuery * _connectAudioQuery;
    REDuetContextQuery * _connectCarQuery;
    bool  _connectedToCar;
    bool  _connectedToSpeaker;
    NSDictionary * _localDevices;
}

@property (getter=_isConnctedToCar, setter=_setConnectedToCar:) bool _connectedToCar;
@property (getter=_isConnectedToSpeaker, setter=_setConnectedToSpeaker:) bool _connectedToSpeaker;
@property (readonly) bool connectedToCar;
@property (readonly) bool connectedToSpeaker;
@property (retain) NSDictionary *localDevices;

+ (id)bluetoothQueue;
+ (id)supportedFeatures;

- (void).cxx_destruct;
- (id)_init;
- (bool)_isConnctedToCar;
- (bool)_isConnectedToSpeaker;
- (void)_registerForBluetoothNotifications;
- (void)_setConnectedToCar:(bool)arg1;
- (void)_setConnectedToSpeaker:(bool)arg1;
- (void)_unregisterForBluetoothNotifications;
- (bool)connectedToCar;
- (bool)connectedToSpeaker;
- (id)featureValueForFeature:(id)arg1 element:(id)arg2 engine:(id)arg3 trainingContext:(id)arg4;
- (id)localDevices;
- (void)pause;
- (void)resume;
- (void)setLocalDevices:(id)arg1;
- (void)update;

@end

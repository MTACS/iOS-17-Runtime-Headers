
@interface TUAudioRoute : TURoute {
    NSString * _avAudioRouteName;
    NSDictionary * _route;
}

@property (nonatomic, readonly, copy) NSString *avAudioRouteName;
@property (nonatomic, readonly, copy) NSString *bluetoothProductIdentifier;
@property (getter=isHeadphoneJackConnected, nonatomic, readonly) bool headphoneJackConnected;
@property (nonatomic, readonly, copy) NSDictionary *route;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_routeTypeEqualTo:(id)arg1;
- (id)avAudioRouteName;
- (long long)bluetoothEndpointType;
- (id)bluetoothProductIdentifier;
- (id)customDescription;
- (long long)deviceType;
- (void)encodeWithCoder:(id)arg1;
- (id)identifiersOfOtherConnectedDevices;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isA2DPRoute;
- (bool)isAirTunes;
- (bool)isBluetooth;
- (bool)isBluetoothLE;
- (bool)isBluetoothManaged;
- (bool)isCarAudio;
- (bool)isCurrentlyPicked;
- (bool)isDefaultRoute;
- (bool)isHandset;
- (bool)isHeadphoneJackConnected;
- (bool)isInEarDetectionEnabled;
- (bool)isInEarDetectionSupported;
- (bool)isPartnerRouteRoutable;
- (bool)isPreferred;
- (bool)isPreferredAndActive;
- (bool)isReceiver;
- (bool)isSiblingRoutePresent;
- (bool)isSpeaker;
- (bool)isWiredHeadphones;
- (bool)isWiredHeadset;
- (bool)isWirelessHeadset;
- (id)route;
- (bool)supportsHighQualityVoiceWithMedia;
- (bool)supportsSharePlay;

@end

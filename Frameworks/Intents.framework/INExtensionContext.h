
@interface INExtensionContext : NSObject <NSSecureCoding> {
    NSArray * _airPlayRouteIdentifiers;
    unsigned int  _audioSessionID;
    NSString * _recordDeviceIdentifier;
    NSUUID * _recordDeviceUID;
    NSString * _recordRoute;
}

@property (setter=_setAirPlayRouteIdentifiers:, nonatomic, copy) NSArray *_airPlayRouteIdentifiers;
@property (setter=_setAudioSessionID:, nonatomic) unsigned int _audioSessionID;
@property (setter=_setRecordDeviceIdentifier:, nonatomic, copy) NSString *_recordDeviceIdentifier;
@property (setter=_setRecordDeviceUID:, nonatomic, copy) NSUUID *_recordDeviceUID;
@property (setter=_setRecordRoute:, nonatomic, copy) NSString *_recordRoute;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_airPlayRouteIdentifiers;
- (unsigned int)_audioSessionID;
- (id)_recordDeviceIdentifier;
- (id)_recordDeviceUID;
- (id)_recordRoute;
- (void)_setAirPlayRouteIdentifiers:(id)arg1;
- (void)_setAudioSessionID:(unsigned int)arg1;
- (void)_setRecordDeviceIdentifier:(id)arg1;
- (void)_setRecordDeviceUID:(id)arg1;
- (void)_setRecordRoute:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

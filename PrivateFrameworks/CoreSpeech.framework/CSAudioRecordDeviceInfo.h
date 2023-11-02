
@interface CSAudioRecordDeviceInfo : NSObject <NSCopying, NSSecureCoding> {
    bool  _isRemoteDevice;
    NSString * _remoteDeviceProductIdentifier;
    NSUUID * _remoteDeviceUID;
    NSString * _remoteDeviceUIDString;
    NSString * _route;
}

@property (nonatomic, readonly) bool isRemoteDevice;
@property (nonatomic, readonly, copy) NSString *remoteDeviceProductIdentifier;
@property (nonatomic, readonly, copy) NSUUID *remoteDeviceUID;
@property (nonatomic, readonly, copy) NSString *remoteDeviceUIDString;
@property (nonatomic, readonly, copy) NSString *route;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAVVCRecordDeviceInfo:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRoute:(id)arg1 isRemoteDevice:(bool)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4;
- (id)initWithRoute:(id)arg1 isRemoteDevice:(bool)arg2 remoteDeviceUID:(id)arg3 remoteDeviceProductIdentifier:(id)arg4 remoteDeviceUIDString:(id)arg5;
- (id)initWithXPCObject:(id)arg1;
- (bool)isRemoteDevice;
- (id)remoteDeviceProductIdentifier;
- (id)remoteDeviceUID;
- (id)remoteDeviceUIDString;
- (id)route;
- (id)xpcObject;

@end

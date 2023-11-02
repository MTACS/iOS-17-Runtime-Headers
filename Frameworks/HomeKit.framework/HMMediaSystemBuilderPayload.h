
@interface HMMediaSystemBuilderPayload : HMFObject <HMMessageEncoding> {
    NSString * _configuredName;
    NSUUID * _leftAccessoryUUID;
    NSUUID * _leftComponentUUID;
    NSString * _name;
    NSUUID * _rightAccessoryUUID;
    NSUUID * _rightComponentUUID;
    NSUUID * _sessionID;
    NSUUID * _uuid;
}

@property (readonly, copy) NSString *configuredName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSUUID *leftAccessoryUUID;
@property (readonly, copy) NSUUID *leftComponentUUID;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSUUID *rightAccessoryUUID;
@property (readonly, copy) NSUUID *rightComponentUUID;
@property (readonly, copy) NSUUID *sessionID;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uuid;

+ (bool)decodeComponentData:(id)arg1 leftComponentUUID:(id*)arg2 leftAccessoryUUID:(id*)arg3 rightComponentUUID:(id*)arg4 rightAccessoryUUID:(id*)arg5;
+ (id)encodeComponentDataWithLeftComponentUUID:(id)arg1 leftAccessoryUUID:(id)arg2 rightComponentUUID:(id)arg3 rightAccessoryUUID:(id)arg4;

- (void).cxx_destruct;
- (id)configuredName;
- (unsigned long long)hash;
- (id)initWithPayload:(id)arg1;
- (id)initWithUUID:(id)arg1 name:(id)arg2 configuredName:(id)arg3 leftComponentUUID:(id)arg4 rightComponentUUID:(id)arg5 leftAccessoryUUID:(id)arg6 rightAccessoryUUID:(id)arg7 sessionID:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)leftAccessoryUUID;
- (id)leftComponentUUID;
- (id)name;
- (id)payloadCopy;
- (id)rightAccessoryUUID;
- (id)rightComponentUUID;
- (id)sessionID;
- (id)uuid;

@end

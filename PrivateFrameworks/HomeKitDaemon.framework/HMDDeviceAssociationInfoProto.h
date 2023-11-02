
@interface HMDDeviceAssociationInfoProto : NSObject {
    NSUUID * _accessoryUUID;
    NSString * _idsDestination;
    NSUUID * _idsIdentifier;
}

@property (readonly) NSUUID *accessoryUUID;
@property (readonly) NSString *idsDestination;
@property (readonly) NSUUID *idsIdentifier;

- (void).cxx_destruct;
- (id)accessoryUUID;
- (id)description;
- (unsigned long long)hash;
- (id)idsDestination;
- (id)idsIdentifier;
- (id)initWithAccessoryUUID:(id)arg1 idsIdentifier:(id)arg2 idsDestination:(id)arg3;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProtoPayload:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)protoData;
- (id)protoPayload;

@end

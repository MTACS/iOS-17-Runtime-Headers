
@interface WBSPasskeyAutoFillFromNearbyDeviceOptions : NSObject <NSSecureCoding> {
    NSXPCListenerEndpoint * _agentEndpoint;
    NSUUID * _operationUUID;
}

@property (nonatomic, readonly, copy) NSXPCListenerEndpoint *agentEndpoint;
@property (nonatomic, readonly, copy) NSUUID *operationUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)agentEndpoint;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOperationUUID:(id)arg1;
- (id)operationUUID;

@end

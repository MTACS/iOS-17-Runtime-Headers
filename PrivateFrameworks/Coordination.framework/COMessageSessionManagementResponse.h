
@interface COMessageSessionManagementResponse : COMessageChannelResponse {
    NSData * _payload;
    NSString * _payloadType;
    NSError * _remoteError;
}

@property (nonatomic, readonly, copy) NSData *payload;
@property (nonatomic, readonly, copy) NSString *payloadType;
@property (nonatomic, readonly, copy) NSError *remoteError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 payloadType:(id)arg2;
- (id)initWithRemoteError:(id)arg1;
- (id)payload;
- (id)payloadType;
- (id)remoteError;

@end

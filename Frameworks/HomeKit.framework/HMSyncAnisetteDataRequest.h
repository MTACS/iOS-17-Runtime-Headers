
@interface HMSyncAnisetteDataRequest : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol> {
    NSData * _simData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *messageName;
@property (nonatomic, readonly) NSDictionary *messagePayload;
@property (nonatomic, copy) NSData *simData;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *xpcMessageName;

+ (id)messageName;
+ (id)objWithDict:(id)arg1;
+ (id)objWithMessage:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)xpcMessageName;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageName;
- (id)messagePayload;
- (void)setSimData:(id)arg1;
- (id)simData;
- (id)xpcMessageName;

@end

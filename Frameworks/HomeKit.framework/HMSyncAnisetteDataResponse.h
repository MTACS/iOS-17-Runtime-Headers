
@interface HMSyncAnisetteDataResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol> {
    bool  _didSucceed;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didSucceed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *messageName;
@property (nonatomic, readonly) NSDictionary *messagePayload;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *xpcMessageName;

+ (id)messageName;
+ (id)objWithDict:(id)arg1;
+ (id)objWithMessage:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)xpcMessageName;

- (id)description;
- (bool)didSucceed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageName;
- (id)messagePayload;
- (void)setDidSucceed:(bool)arg1;
- (id)xpcMessageName;

@end


@interface HMDRemoteLoginCompanionAuthenticationRequest : HMDRemoteLoginAuthenticationRequest <HMRemoteLoginMessageProtocol> {
    ACAccount * _account;
    AKDevice * _companionDevice;
}

@property (nonatomic, retain) ACAccount *account;
@property (nonatomic, retain) AKDevice *companionDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
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

- (void).cxx_destruct;
- (id)account;
- (id)companionDevice;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageName;
- (id)messagePayload;
- (void)setAccount:(id)arg1;
- (void)setCompanionDevice:(id)arg1;
- (id)xpcMessageName;

@end

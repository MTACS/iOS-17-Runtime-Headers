
@interface HMDRemoteLoginAuthenticationResponse : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol> {
    ACAccount * _loggedInAccount;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ACAccount *loggedInAccount;
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
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)loggedInAccount;
- (id)messageName;
- (id)messagePayload;
- (void)setLoggedInAccount:(id)arg1;
- (id)xpcMessageName;

@end

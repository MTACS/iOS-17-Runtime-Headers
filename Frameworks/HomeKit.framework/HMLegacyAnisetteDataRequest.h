
@interface HMLegacyAnisetteDataRequest : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol> {
    NSString * _dsid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *dsid;
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
- (id)description;
- (id)dsid;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageName;
- (id)messagePayload;
- (void)setDsid:(id)arg1;
- (id)xpcMessageName;

@end

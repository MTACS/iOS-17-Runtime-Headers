
@interface HMFetchAnisetteDataRequest : HMRemoteLoginMessage <HMRemoteLoginMessageProtocol> {
    bool  _shouldProvision;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *messageName;
@property (nonatomic, readonly) NSDictionary *messagePayload;
@property (nonatomic) bool shouldProvision;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *xpcMessageName;

+ (id)messageName;
+ (id)objWithDict:(id)arg1;
+ (id)objWithMessage:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)xpcMessageName;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)messageName;
- (id)messagePayload;
- (void)setShouldProvision:(bool)arg1;
- (bool)shouldProvision;
- (id)xpcMessageName;

@end

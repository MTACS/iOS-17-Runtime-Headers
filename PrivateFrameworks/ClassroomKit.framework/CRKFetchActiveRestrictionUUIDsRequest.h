
@interface CRKFetchActiveRestrictionUUIDsRequest : CATTaskRequest {
    NSString * _clientType;
}

@property (nonatomic, copy) NSString *clientType;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setClientType:(id)arg1;

@end

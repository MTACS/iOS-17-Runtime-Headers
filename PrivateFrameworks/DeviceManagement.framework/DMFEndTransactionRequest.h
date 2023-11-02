
@interface DMFEndTransactionRequest : DMFTaskRequest {
    NSUUID * _UUID;
}

@property (nonatomic, copy) NSUUID *UUID;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)UUID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setUUID:(id)arg1;

@end

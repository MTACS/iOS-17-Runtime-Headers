
@interface DMFSetMaximumResidentUsersRequest : DMFTaskRequest {
    unsigned long long  _count;
}

@property (nonatomic) unsigned long long count;

+ (bool)isPermittedOnSystemConnection;
+ (bool)isPermittedOnUserConnection;
+ (id)permittedPlatforms;
+ (bool)supportsSecureCoding;

- (unsigned long long)count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setCount:(unsigned long long)arg1;

@end

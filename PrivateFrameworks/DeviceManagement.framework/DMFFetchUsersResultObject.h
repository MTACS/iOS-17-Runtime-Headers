
@interface DMFFetchUsersResultObject : CATTaskResultObject {
    NSArray * _users;
}

@property (nonatomic, readonly, copy) NSArray *users;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUsers:(id)arg1;
- (id)users;

@end

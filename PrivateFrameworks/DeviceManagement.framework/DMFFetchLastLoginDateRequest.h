
@interface DMFFetchLastLoginDateRequest : DMFTaskRequest {
    NSSet * _appleIDs;
}

@property (nonatomic, copy) NSSet *appleIDs;

+ (Class)allowlistedClassForResultObject;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)appleIDs;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAppleIDs:(id)arg1;

@end

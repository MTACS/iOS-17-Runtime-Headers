
@interface KCSharingGroupFetchRequest : NSObject <NSSecureCoding> {
    NSPredicate * _predicate;
}

@property (nonatomic, readonly) NSPredicate *predicate;

+ (id)all;
+ (id)groupName:(id)arg1;
+ (id)pending;
+ (id)predicateMatchingAllGroups;
+ (id)predicateMatchingGroupsWithInviteStatus:(long long)arg1;
+ (id)predicateMatchingGroupsWithName:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPredicate:(id)arg1;
- (id)predicate;

@end

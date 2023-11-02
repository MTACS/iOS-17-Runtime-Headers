
@interface SAFmfPunchOutFriend : SADomainCommand

@property (nonatomic, copy) NSArray *friends;

+ (id)punchOutFriend;
+ (id)punchOutFriendWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)friends;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setFriends:(id)arg1;

@end

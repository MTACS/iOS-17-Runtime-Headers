
@interface SAMPDislikesMediaEntity : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *influencedUserSharedUserId;

+ (id)dislikesMediaEntity;
+ (id)dislikesMediaEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)influencedUserSharedUserId;
- (bool)requiresResponse;
- (void)setInfluencedUserSharedUserId:(id)arg1;

@end

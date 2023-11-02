
@interface SAMPLikesMediaEntity : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *influencedSharedUserId;

+ (id)likesMediaEntity;
+ (id)likesMediaEntityWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)influencedSharedUserId;
- (bool)requiresResponse;
- (void)setInfluencedSharedUserId:(id)arg1;

@end

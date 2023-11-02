
@protocol BCSItemIdentifying <NSObject>

@required

- (NSObject *)itemIdentifier;
- (bool)matchesItemIdentifying:(id <BCSItemIdentifying>)arg1;
- (long long)truncatedHash;
- (long long)type;

@end

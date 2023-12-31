
@interface SAMPEnableShuffle : SADomainCommand

@property (nonatomic) bool enable;

+ (id)enableShuffle;
+ (id)enableShuffleWithDictionary:(id)arg1 context:(id)arg2;

- (bool)enable;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setEnable:(bool)arg1;

@end

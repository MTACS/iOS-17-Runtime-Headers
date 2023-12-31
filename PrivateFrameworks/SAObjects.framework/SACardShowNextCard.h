
@interface SACardShowNextCard : SABaseClientBoundCommand

@property (nonatomic, retain) SACardSnippet *cardSnippet;

+ (id)showNextCard;
+ (id)showNextCardWithDictionary:(id)arg1 context:(id)arg2;

- (id)cardSnippet;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCardSnippet:(id)arg1;

@end

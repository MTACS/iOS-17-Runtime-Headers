
@interface SAUIShowFullScreenEffect : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *fullScreenEffectType;

+ (id)showFullScreenEffect;
+ (id)showFullScreenEffectWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)fullScreenEffectType;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setFullScreenEffectType:(id)arg1;

@end

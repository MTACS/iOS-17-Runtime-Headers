
@interface SAUIListenForPronunciation : SABaseClientBoundCommand

@property (nonatomic, retain) SASPronunciationContext *context;

+ (id)listenForPronunciation;
+ (id)listenForPronunciationWithDictionary:(id)arg1 context:(id)arg2;

- (id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setContext:(id)arg1;

@end

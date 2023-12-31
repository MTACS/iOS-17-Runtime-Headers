
@interface SASStartPronunciationRequest : SASStartSpeech

@property (nonatomic, retain) SASPronunciationContext *context;

+ (id)startPronunciationRequest;
+ (id)startPronunciationRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)context;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setContext:(id)arg1;

@end

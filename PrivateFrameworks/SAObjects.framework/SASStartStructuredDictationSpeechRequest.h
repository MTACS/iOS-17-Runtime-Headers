
@interface SASStartStructuredDictationSpeechRequest : SASStartSpeechRequest

@property (nonatomic, copy) NSString *structuredDictationType;

+ (id)startStructuredDictationSpeechRequest;
+ (id)startStructuredDictationSpeechRequestWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setStructuredDictationType:(id)arg1;
- (id)structuredDictationType;

@end

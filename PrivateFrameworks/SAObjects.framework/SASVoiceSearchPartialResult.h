
@interface SASVoiceSearchPartialResult : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *recognitionText;
@property (nonatomic) bool stable;
@property (nonatomic, copy) NSArray *voiceSearchResults;

+ (id)voiceSearchPartialResult;
+ (id)voiceSearchPartialResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)recognitionText;
- (bool)requiresResponse;
- (void)setRecognitionText:(id)arg1;
- (void)setStable:(bool)arg1;
- (void)setVoiceSearchResults:(id)arg1;
- (bool)stable;
- (id)voiceSearchResults;

@end

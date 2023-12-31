
@interface SASVoiceSearchFinalResult : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *recognitionText;
@property (nonatomic, copy) NSArray *voiceSearchResults;

+ (id)voiceSearchFinalResult;
+ (id)voiceSearchFinalResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)recognitionText;
- (bool)requiresResponse;
- (void)setRecognitionText:(id)arg1;
- (void)setVoiceSearchResults:(id)arg1;
- (id)voiceSearchResults;

@end

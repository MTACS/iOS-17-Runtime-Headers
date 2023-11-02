
@interface SAUIRevealRecognizedSpeech : SABaseClientBoundCommand

@property (nonatomic, retain) SASRecognition *recognition;
@property (nonatomic, copy) NSString *speechRecognizedAceId;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)recognition;
- (bool)requiresResponse;
- (void)setRecognition:(id)arg1;
- (void)setSpeechRecognizedAceId:(id)arg1;
- (id)speechRecognizedAceId;

@end

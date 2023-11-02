
@interface SASSpeechRecognitionComplete : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *sessionId;

+ (id)speechRecognitionComplete;
+ (id)speechRecognitionCompleteWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (id)sessionId;
- (void)setSessionId:(id)arg1;

@end

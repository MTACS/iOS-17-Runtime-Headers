
@interface SAUIChangePrimaryUtterance : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *speechRecognitionId;
@property (nonatomic) long long utteranceIndex;

+ (id)changePrimaryUtterance;
+ (id)changePrimaryUtteranceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setSpeechRecognitionId:(id)arg1;
- (void)setUtteranceIndex:(long long)arg1;
- (id)speechRecognitionId;
- (long long)utteranceIndex;

@end


@interface SASSpeechPartialResult : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *language;
@property (nonatomic, copy) NSArray *tokens;

// Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)speechPartialResult;
+ (id)speechPartialResultWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)language;
- (bool)requiresResponse;
- (void)setLanguage:(id)arg1;
- (void)setTokens:(id)arg1;
- (id)tokens;

// Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices

+ (id)createUsingPhrases:(id)arg1 andUtterances:(id)arg2;

- (id)af_bestTextInterpretation;
- (id)af_correctionContext;
- (id)af_speechModel;
- (id)af_tokens;
- (id)af_userUtteranceValue;

@end

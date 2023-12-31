
@interface SASSpeechAlternativesSnippet : SAUISnippet

@property (nonatomic) long long maxEntryToShow;
@property (nonatomic, retain) SASRecognition *recognition;
@property (nonatomic, copy) NSString *sessionId;

+ (id)speechAlternativesSnippet;
+ (id)speechAlternativesSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (long long)maxEntryToShow;
- (id)recognition;
- (id)sessionId;
- (void)setMaxEntryToShow:(long long)arg1;
- (void)setRecognition:(id)arg1;
- (void)setSessionId:(id)arg1;

@end

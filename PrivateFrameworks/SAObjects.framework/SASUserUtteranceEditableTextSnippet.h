
@interface SASUserUtteranceEditableTextSnippet : SAUISnippet

@property (nonatomic, copy) NSString *sessionId;
@property (nonatomic, copy) NSString *utterance;

+ (id)userUtteranceEditableTextSnippet;
+ (id)userUtteranceEditableTextSnippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)sessionId;
- (void)setSessionId:(id)arg1;
- (void)setUtterance:(id)arg1;
- (id)utterance;

@end


@interface SAAnswerSnippet : SAUISnippet

@property (nonatomic, retain) SAUIAppPunchOut *answerPunchOut;
@property (nonatomic, copy) NSArray *answers;

+ (id)snippet;
+ (id)snippetWithDictionary:(id)arg1 context:(id)arg2;

- (id)answerPunchOut;
- (id)answers;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAnswerPunchOut:(id)arg1;
- (void)setAnswers:(id)arg1;

@end

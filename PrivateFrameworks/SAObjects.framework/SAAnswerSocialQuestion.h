
@interface SAAnswerSocialQuestion : SAAnswerAbstractSocialPost

@property (nonatomic, copy) NSArray *socialAnswers;

+ (id)socialQuestion;
+ (id)socialQuestionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setSocialAnswers:(id)arg1;
- (id)socialAnswers;

@end

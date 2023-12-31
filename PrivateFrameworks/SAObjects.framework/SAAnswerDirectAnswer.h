
@interface SAAnswerDirectAnswer : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *answer;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SAAnswerSpeakableAnswer *speakableAnswer;
@property (readonly) Class superclass;

+ (id)directAnswer;
+ (id)directAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)answer;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAnswer:(id)arg1;
- (void)setSpeakableAnswer:(id)arg1;
- (id)speakableAnswer;

@end

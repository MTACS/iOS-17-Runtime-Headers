
@interface SAAnswerSpeakableAnswer : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *parameters;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *templateName;

+ (id)speakableAnswer;
+ (id)speakableAnswerWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)parameters;
- (void)setParameters:(id)arg1;
- (void)setTemplateName:(id)arg1;
- (id)templateName;

@end

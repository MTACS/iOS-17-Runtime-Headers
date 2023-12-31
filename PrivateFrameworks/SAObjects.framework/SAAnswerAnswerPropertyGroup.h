
@interface SAAnswerAnswerPropertyGroup : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSArray *answerProperties;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

+ (id)answerPropertyGroup;
+ (id)answerPropertyGroupWithDictionary:(id)arg1 context:(id)arg2;

- (id)answerProperties;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAnswerProperties:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end


@interface SAAndCondition : AceObject <SASupportCondition>

@property (nonatomic, copy) NSArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)andCondition;
+ (id)andConditionWithDictionary:(id)arg1 context:(id)arg2;

- (id)conditions;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setConditions:(id)arg1;

@end

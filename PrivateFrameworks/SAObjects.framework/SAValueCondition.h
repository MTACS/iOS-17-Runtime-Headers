
@interface SAValueCondition : AceObject <SASupportCondition>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *legalValues;
@property (readonly) Class superclass;

+ (id)valueCondition;
+ (id)valueConditionWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)legalValues;
- (void)setLegalValues:(id)arg1;

@end

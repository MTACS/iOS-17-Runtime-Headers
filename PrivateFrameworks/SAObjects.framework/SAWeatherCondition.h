
@interface SAWeatherCondition : AceObject <SAAceSerializable>

@property (nonatomic, copy) NSString *conditionCode;
@property (nonatomic) long long conditionCodeIndex;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)condition;
+ (id)conditionWithDictionary:(id)arg1 context:(id)arg2;

- (id)conditionCode;
- (long long)conditionCodeIndex;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setConditionCode:(id)arg1;
- (void)setConditionCodeIndex:(long long)arg1;

@end

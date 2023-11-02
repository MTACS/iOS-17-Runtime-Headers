
@interface SXHints : SXJSONObject <SXHints>

@property (nonatomic, readonly) <SXConditionalHints> *conditionals;
@property (nonatomic, readonly) <SXConditionHints> *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;

@end

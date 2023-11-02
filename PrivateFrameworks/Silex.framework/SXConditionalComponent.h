
@interface SXConditionalComponent : SXComponent <SXConditional>

@property (nonatomic, readonly) SXJSONArray *conditions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id /* block */)valueClassBlockForPropertyWithName:(id)arg1;

@end

@interface WFCoercionVariableAggrandizement : WFVariableAggrandizement

@property (nonatomic, readonly) Class coercionItemClass;

- (void)applyToContentCollection:(id)arg1 completionHandler:(id /* block */)arg2;
- (Class)coercionItemClass;
- (id)coercionItemClasses;
- (unsigned long long)hash;
- (id)initWithCoercionItemClass:(Class)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)processedContentClasses:(id)arg1;

@end

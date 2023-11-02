
@interface _EMCompoundQueryGenerator : NSObject <EMSearchableIndexQueryGenerator>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (long long)operandFromPredicate:(id)arg1;
- (id)queryExpressionFromPredicate:(id)arg1 propertyMapper:(id)arg2 languages:(id)arg3;

@end

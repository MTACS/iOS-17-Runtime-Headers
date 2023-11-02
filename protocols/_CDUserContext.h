
@protocol _CDUserContext <_CDLocalContext>

@required

- (<_CDLocalContext> *)localContext;
- (NSDictionary *)valuesForKeyPaths:(NSArray *)arg1;
- (NSArray *)valuesForKeyPaths:(NSArray *)arg1 inContextsMatchingPredicate:(_CDContextualPredicate *)arg2;

@end

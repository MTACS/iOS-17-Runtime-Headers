
@protocol BMCoreDuetMediaUsageStore

@required

- (bool)addContextValue:(id)arg1 toArrayAtKeyPath:(_CDContextualKeyPath *)arg2;
- (NSArray *)removeObjectsMatchingPredicate:(NSPredicate *)arg1 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg2;
- (bool)saveKnowledgeEvent:(_DKEvent *)arg1 error:(id*)arg2;

@end

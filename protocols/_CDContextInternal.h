
@protocol _CDContextInternal <_CDLocalContext>

@required

- (_CDContextValue *)addObjects:(NSArray *)arg1 andRemoveObjects:(NSArray *)arg2 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg3 valueDidChange:(bool*)arg4;
- (_CDContextValue *)propertiesForContextualKeyPath:(_CDContextualKeyPath *)arg1;
- (_CDContextValue *)removeObjectsMatchingPredicate:(NSPredicate *)arg1 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg2 removedObjects:(id*)arg3;
- (void)setContextValue:(_CDContextValue *)arg1 forContextualKeyPath:(_CDContextualKeyPath *)arg2;
- (_CDContextValue *)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 returningMetadataForContextualKeyPath:(_CDContextualKeyPath *)arg2;

@end

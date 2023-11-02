
@protocol _CDLocalContext <_CDContext>

@required

- (bool)addObjects:(NSArray *)arg1 andRemoveObjects:(NSArray *)arg2 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg3;
- (bool)addObjects:(NSArray *)arg1 toArrayAtKeyPath:(_CDContextualKeyPath *)arg2;
- (bool)removeObjects:(NSArray *)arg1 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg2;
- (NSArray *)removeObjectsMatchingPredicate:(NSPredicate *)arg1 fromArrayAtKeyPath:(_CDContextualKeyPath *)arg2;
- (bool)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forContextualKeyPath:(_CDContextualKeyPath *)arg2;
- (bool)setObject:(NSObject<NSCopying><NSSecureCoding> *)arg1 forKeyedSubscript:(_CDContextualKeyPath *)arg2;

@end


@protocol TSCEResolverContainer <NSObject>

@required

- (void)addRemappedTableName:(NSString *)arg1;
- (void)clearRemappedTableNames;
- (unsigned int)nextUntitledResolverIndex;
- (NSSet *)remappedTableNames;
- (<TSCEReferenceResolving> *)resolverMatchingName:(NSString *)arg1;
- (bool)resolverNameIsUsed:(NSString *)arg1;
- (NSArray *)resolversMatchingPrefix:(NSString *)arg1;
- (void)rollbackNextUntitledResolverIndex:(unsigned int)arg1;
- (unsigned int)saveNextUntitledResolverIndex;

@end

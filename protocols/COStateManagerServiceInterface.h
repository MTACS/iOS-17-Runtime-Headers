
@protocol COStateManagerServiceInterface <NSObject, COStateManagerLegacyServiceInterface>

@required

- (void)addObserverWithPredicate:(NSPredicate *)arg1 suite:(NSString *)arg2 interestClusters:(NSSet *)arg3;
- (void)doorbellDelayWithCallback:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, double, void*
- (void)removeKeyPaths:(void *)arg1 targetClusters:(void *)arg2 withCallback:(void *)arg3; // needs 3 arg types, found 8: NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeObserverWithPredicate:(NSPredicate *)arg1;
- (void)setDictionary:(void *)arg1 suite:(void *)arg2 interestClusters:(void *)arg3 targetCluster:(void *)arg4 withCallback:(void *)arg5; // needs 5 arg types, found 10: NSDictionary *, NSString *, NSSet *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end


@interface TRIFactorPackSetStorage : NSObject {
    <TRIPaths> * _paths;
}

- (void).cxx_destruct;
- (id)_collectFactorPackSets;
- (bool)_forceRemoveItemAtPath:(id)arg1;
- (bool)_nonAtomicOverwriteWithSrc:(id)arg1 dest:(id)arg2;
- (void)enumerateCompatibleFactorPacksForFactorPackSet:(id)arg1 usingLegacyPaths:(bool)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateFBFactorPacksForFactorPackSet:(id)arg1 usingLegacyPaths:(bool)arg2 withBlock:(id /* block */)arg3;
- (void)enumerateFactorPacksForFactorPackSet:(id)arg1 usingLegacyPaths:(bool)arg2 withBlock:(id /* block */)arg3;
- (bool)hasFactorPackSetWithId:(id)arg1 path:(id*)arg2;
- (id)init;
- (id)initWithPaths:(id)arg1;
- (bool)migrateEligibleFactorPacksToGlobalWithServerContext:(id)arg1;
- (id)parentDirForFactorPackSets;
- (id)pathForFactorPackSetWithId:(id)arg1;
- (bool)removeUnreferencedFactorPackSetsWithServerContext:(id)arg1 removedCount:(unsigned int*)arg2;
- (bool)saveFactorPackSet:(id)arg1;

@end

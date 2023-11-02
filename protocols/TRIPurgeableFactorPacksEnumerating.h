
@protocol TRIPurgeableFactorPacksEnumerating <NSObject>

@required

- (void)enumerateExperimentFactorPackPurgeCandidatesFromNamespaceNames:(void *)arg1 purgeableFactorFilterBlock:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 16: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSString *, NSString *, void*, id /* block */, void*, void, id /* block */, TRIPurgeableFactorPack *, NSDictionary *, bool*, void*
- (void)enumerateRolloutFactorPackPurgeCandidatesFromNamespaceNames:(void *)arg1 purgeableFactorFilterBlock:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 16: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, NSString *, NSString *, void*, id /* block */, void*, void, id /* block */, TRIPurgeableFactorPack *, NSDictionary *, bool*, void*

@end

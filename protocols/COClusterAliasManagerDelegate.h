
@protocol COClusterAliasManagerDelegate <NSObject>

@optional

- (void)aliasManager:(void *)arg1 activatingMesh:(void *)arg2 withClusterIdentifier:(void *)arg3 forClusters:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: COClusterAliasManager *, COMeshController *, NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)aliasManager:(void *)arg1 deactivatingMesh:(void *)arg2 withClusterIdentifier:(void *)arg3 forClusters:(void *)arg4 completion:(void *)arg5; // needs 5 arg types, found 9: COClusterAliasManager *, COMeshController *, NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

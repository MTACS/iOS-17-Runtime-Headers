
@interface _COClusterAliasManagerStateTrackingAddOn : COMeshAddOn {
    COClusterAliasManager * _aliasManager;
}

@property (nonatomic) COClusterAliasManager *aliasManager;

- (void).cxx_destruct;
- (id)aliasManager;
- (void)didStopMeshController:(id)arg1;
- (void)setAliasManager:(id)arg1;

@end

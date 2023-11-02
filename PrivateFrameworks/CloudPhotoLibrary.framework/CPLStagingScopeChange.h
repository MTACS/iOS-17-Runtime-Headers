
@interface CPLStagingScopeChange : CPLScopeChange {
    CPLScopeChange * _stagedScopeChange;
    long long  _stagedScopeFlags;
    NSData * _stagedTransportScope;
}

@property (nonatomic, copy) CPLScopeChange *stagedScopeChange;
@property (nonatomic) long long stagedScopeFlags;
@property (nonatomic, copy) NSData *stagedTransportScope;

- (void).cxx_destruct;
- (void)setStagedScopeChange:(id)arg1;
- (void)setStagedScopeFlags:(long long)arg1;
- (void)setStagedTransportScope:(id)arg1;
- (id)stagedScopeChange;
- (long long)stagedScopeFlags;
- (id)stagedTransportScope;

@end

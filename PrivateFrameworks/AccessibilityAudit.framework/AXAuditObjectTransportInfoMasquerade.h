
@interface AXAuditObjectTransportInfoMasquerade : AXAuditObjectTransportInfo {
    id /* block */  _createLocalObjectWithMasqueradeObjectBlock;
    id /* block */  _createMasqueradeObjectBlock;
    Class  _masqueradeAsClass;
    AXAuditObjectTransportInfo * _masqueradeTransportInfo;
}

@property (nonatomic, copy) id /* block */ createLocalObjectWithMasqueradeObjectBlock;
@property (nonatomic, copy) id /* block */ createMasqueradeObjectBlock;
@property (nonatomic, retain) Class masqueradeAsClass;
@property (nonatomic, retain) AXAuditObjectTransportInfo *masqueradeTransportInfo;

- (void).cxx_destruct;
- (void)_initializeBlocks;
- (id /* block */)createLocalObjectWithMasqueradeObjectBlock;
- (id /* block */)createMasqueradeObjectBlock;
- (id)init;
- (Class)masqueradeAsClass;
- (id)masqueradeTransportInfo;
- (void)setCreateLocalObjectWithMasqueradeObjectBlock:(id /* block */)arg1;
- (void)setCreateMasqueradeObjectBlock:(id /* block */)arg1;
- (void)setMasqueradeAsClass:(Class)arg1;
- (void)setMasqueradeTransportInfo:(id)arg1;

@end

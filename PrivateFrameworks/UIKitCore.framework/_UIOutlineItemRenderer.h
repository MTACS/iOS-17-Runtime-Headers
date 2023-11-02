
@interface _UIOutlineItemRenderer : _UIDiffableDataSourceItemRenderer {
    id /* block */  _willUpdateCellHandler;
}

@property (nonatomic, copy) id /* block */ willUpdateCellHandler;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithIdentifier:(id)arg1 cellClass:(Class)arg2 handler:(id /* block */)arg3;
- (void)setWillUpdateCellHandler:(id /* block */)arg1;
- (id /* block */)willUpdateCellHandler;

@end

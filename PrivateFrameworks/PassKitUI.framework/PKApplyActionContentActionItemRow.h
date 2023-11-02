
@interface PKApplyActionContentActionItemRow : NSObject <PKApplyCollectionViewRow> {
    PKApplyActionContentActionItem * _actionItem;
    id /* block */  _selectionHandler;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (Class)cellClass;
- (void)configureCell:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)handleCellSelection;
- (id)identifier;
- (id)initWithApplyActionContentActionItem:(id)arg1 selectionHandler:(id /* block */)arg2;
- (bool)shouldHighlightItem;

@end

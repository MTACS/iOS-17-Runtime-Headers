
@interface SUUIProductPageTableLockupsSection : SUUIProductPageTableSection <SUUIArtworkRequestDelegate, SUUIMissingItemDelegate> {
    NSMapTable * _artworkRequests;
    SUUIProductPageTableSeparatorView * _footerView;
    SUUIProductPageTableHeaderView * _headerView;
    NSArray * _lockups;
    SUUIMissingItemLoader * _missingItemLoader;
    UIImage * _placeholderImage;
    SUUIStyledImageDataConsumer * _productImageDataConsumer;
    SUUIResourceLoader * _resourceLoader;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUUIResourceLoader *resourceLoader;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_missingItemLoader;
- (id)_productImageForItem:(id)arg1;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)dealloc;
- (id)footerViewForTableView:(id)arg1;
- (id)headerViewForTableView:(id)arg1;
- (double)heightForCellInTableView:(id)arg1 indexPath:(id)arg2;
- (id)initWithLockups:(id)arg1 title:(id)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (long long)numberOfRowsInSection;
- (id)resourceLoader;
- (id)selectionActionForTableView:(id)arg1 indexPath:(id)arg2;
- (void)setResourceLoader:(id)arg1;
- (id)tableViewCellForTableView:(id)arg1 indexPath:(id)arg2;

@end

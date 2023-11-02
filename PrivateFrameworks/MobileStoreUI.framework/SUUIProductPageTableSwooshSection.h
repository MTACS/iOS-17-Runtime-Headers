
@interface SUUIProductPageTableSwooshSection : SUUIProductPageTableSection <SUUIMissingItemDelegate, SUUISwooshViewControllerDelegate> {
    id /* block */  _actionBlock;
    SUUILockupSwooshArtworkLoader * _artworkLoader;
    SUUIMissingItemLoader * _missingItemLoader;
    SUUIResourceLoader * _resourceLoader;
    SUUISwooshPageComponent * _swooshComponent;
    SUUILockupSwooshViewController * _swooshViewController;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, retain) SUUIColorScheme *colorScheme;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SUUIResourceLoader *resourceLoader;
@property (readonly) Class superclass;
@property (nonatomic, readonly) UIViewController *swooshViewController;

- (void).cxx_destruct;
- (id)_artworkLoader;
- (id)_missingItemLoader;
- (id)_swooshViewController;
- (id /* block */)actionBlock;
- (id)colorScheme;
- (void)dealloc;
- (id)headerViewForTableView:(id)arg1;
- (id)initWithItems:(id)arg1 title:(id)arg2;
- (id)initWithLockups:(id)arg1 title:(id)arg2;
- (void)missingItemLoader:(id)arg1 didLoadItems:(id)arg2 invalidItemIdentifiers:(id)arg3;
- (id)resourceLoader;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setColorScheme:(id)arg1;
- (void)setResourceLoader:(id)arg1;
- (void)swoosh:(id)arg1 didSelectCellAtIndex:(long long)arg2;
- (id)swoosh:(id)arg1 imageForCellAtIndex:(long long)arg2;
- (id)swooshViewController;

@end

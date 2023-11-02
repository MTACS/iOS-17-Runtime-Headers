
@interface SUUIQuicklinksPageSection : SUUIStorePageSection <SUUIQuicklinksViewControllerDelegate> {
    SUUIQuicklinksViewController * _quicklinksViewController;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) SUUIQuicklinksPageComponent *pageComponent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_quicklinksViewController;
- (id)cellForIndexPath:(id)arg1;
- (struct CGSize { double x1; double x2; })cellSizeForIndexPath:(id)arg1;
- (void)dealloc;
- (id)initWithPageComponent:(id)arg1;
- (long long)numberOfCells;
- (void)quicklinksViewController:(id)arg1 didSelectLink:(id)arg2 atIndex:(long long)arg3;
- (void)willAppearInContext:(id)arg1;
- (void)willTransitionToSize:(struct CGSize { double x1; double x2; })arg1 withTransitionCoordinator:(id)arg2;

@end

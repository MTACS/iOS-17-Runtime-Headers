
@interface LibraryController : NSObject <LibraryItemRegistration, LibraryViewControllerDelegate, UINavigationControllerDelegate> {
    LibraryConfiguration * _configuration;
    NSMutableDictionary * _itemsByCollection;
    LibraryItemController * _lastSelectedItemController;
    MainLibrarySectionController * _mainLibrarySectionController;
    <SidebarUIProxy> * _sidebarUIProxy;
    LibraryViewController * _sidebarViewController;
    UIViewController * _viewControllerForLastSelectedItemController;
}

@property (nonatomic, readonly) LibraryConfiguration *configuration;
@property (nonatomic, copy) NSString *currentCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) <SidebarUIProxy> *sidebarUIProxy;
@property (nonatomic, retain) LibraryViewController *sidebarViewController;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_reportSelectedItemForAnalytics:(id)arg1;
- (void)_updateSidebarButton;
- (void)browserViewControllerDidChangeSidebarStyle;
- (id)configuration;
- (id)currentCollection;
- (id)initWithConfiguration:(id)arg1;
- (void)libraryViewController:(id)arg1 didSelectItem:(id)arg2;
- (bool)libraryViewController:(id)arg1 shouldPersistSelectionForItem:(id)arg2;
- (void)libraryViewControllerDidClearSelection:(id)arg1;
- (void)navigationController:(id)arg1 willShowViewController:(id)arg2 animated:(bool)arg3;
- (void)registerItem:(id)arg1 forCollectionType:(id)arg2;
- (void)reloadExpansionStateForTabGroup:(id)arg1;
- (void)setCurrentCollection:(id)arg1;
- (void)setSidebarUIProxy:(id)arg1;
- (void)setSidebarViewController:(id)arg1;
- (id)sidebarUIProxy;
- (id)sidebarViewController;

@end

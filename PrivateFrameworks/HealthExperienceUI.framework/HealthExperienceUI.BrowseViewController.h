
@interface HealthExperienceUI.BrowseViewController : UIViewController {
    void $__lazy_storage_$_browseCategoriesViewController;
    void $__lazy_storage_$_browseSearchViewController;
    void $__lazy_storage_$_profileBarButton;
    void activeSearchController;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  categoriesEmptySearchState;
    void experienceStore;
    void healthStore;
    void preservedSearchText;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  sidebarEmptySearchState;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  state;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)restoreUserActivityState:(id)arg1;
- (void)updateStateForTraitCollection;
- (void)viewDidLoad;
- (void)viewIsAppearing:(bool)arg1;

@end

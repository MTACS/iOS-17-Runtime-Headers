
@interface TeaUI.SectionViewController : UIViewController {
    void $__lazy_storage_$_sectionSelectorView;
    void $__lazy_storage_$_sectionsBarButtonItem;
    void $__lazy_storage_$_sectionsSegmentedView;
    void _selectedSectionIndex;
    void barAnimationCoordinator;
    void barBackgroundColor;
    void barCompressionManager;
    void currentSection;
    void dataSource;
    void delegate;
    void presentation;
    void scrollViewProxyManager;
    void sectionBarTextColor;
    void sectionBarTintColor;
    void sectionTitleColor;
    void toolbarManager;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

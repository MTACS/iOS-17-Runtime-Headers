
@interface VideosUI.LibraryHomeShareViewController : VUIBaseViewController <VUIHomeShareViewControllerDelegate> {
    void homeController;
    void lastSelectedMediaLibrary;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void).cxx_destruct;
- (void)homeShareViewController:(id)arg1 didSelectHomeShare:(id)arg2;
- (void)homeShareViewController:(id)arg1 didUpdateWith:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)navigationItem;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;

@end

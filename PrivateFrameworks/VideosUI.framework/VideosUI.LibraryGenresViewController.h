
@interface VideosUI.LibraryGenresViewController : VUIBaseViewController <VUIMenuCollectionViewControllerDelegate> {
    void genres;
    void mediaLibrary;
    void menuController;
    void selectedGenre;
    void serviceRequest;
}

@property (nonatomic, readonly) UINavigationItem *navigationItem;

- (void).cxx_destruct;
- (void)didSelectMenuItemAtIndexPath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)navigationItem;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;

@end


@interface PUAlbumPickerViewController : UIViewController <PUSessionInfoObserver> {
    PUAlbumListViewController * __albumListViewController;
    PUAlbumPickerSessionInfo * _albumPickerSessionInfo;
    PHCollectionList * _collectionList;
    id /* block */  _completionHandler;
    UINavigationController * _contentNavigationController;
    bool  _didLoadSubviews;
    PUAlbumPickerViewControllerSpec * _spec;
}

@property (setter=_setAlbumListViewController:, nonatomic, retain) PUAlbumListViewController *_albumListViewController;
@property (setter=_setSessionInfo:, nonatomic, retain) PUAlbumPickerSessionInfo *albumPickerSessionInfo;
@property (nonatomic, retain) PHCollectionList *collectionList;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (setter=_setContentNavigationController:, nonatomic, retain) UINavigationController *contentNavigationController;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool didLoadSubviews;
@property (readonly) unsigned long long hash;
@property (setter=_setSpec:, nonatomic, retain) PUAlbumPickerViewControllerSpec *spec;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_albumListViewController;
- (void)_loadSubviewsIfNeeded;
- (long long)_preferredWhitePointAdaptivityStyle;
- (void)_setAlbumListViewController:(id)arg1;
- (void)_setContentNavigationController:(id)arg1;
- (void)_setSessionInfo:(id)arg1;
- (void)_setSpec:(id)arg1;
- (id)albumPickerSessionInfo;
- (id)collectionList;
- (id /* block */)completionHandler;
- (id)contentNavigationController;
- (void)dealloc;
- (bool)didLoadSubviews;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithSessionInfo:(id)arg1;
- (id)initWithSpec:(id)arg1 sessionInfo:(id)arg2;
- (void)sessionInfoStatusDidChange:(id)arg1;
- (void)setCollectionList:(id)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setDidLoadSubviews:(bool)arg1;
- (bool)shouldAutorotate;
- (id)spec;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;

@end

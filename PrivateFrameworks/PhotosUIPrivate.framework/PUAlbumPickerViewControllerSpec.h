
@interface PUAlbumPickerViewControllerSpec : NSObject {
    PUAlbumListViewControllerSpec * _albumListViewControllerSpec;
    unsigned long long  _supportedInterfaceOrientations;
}

@property (nonatomic, readonly) PUAlbumListViewControllerSpec *albumListViewControllerSpec;
@property (nonatomic, readonly) PUAlbumListViewController *newAlbumListViewController;
@property (nonatomic, readonly) unsigned long long supportedInterfaceOrientations;

- (void).cxx_destruct;
- (id)albumListViewControllerSpec;
- (void)configureSessionInfo:(id)arg1;
- (id)newAlbumListViewController;
- (unsigned long long)supportedInterfaceOrientations;

@end

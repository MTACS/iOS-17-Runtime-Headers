
@interface FAProfilePictureTableViewDecorator : FATableViewDecorator {
    FAProfilePictureStore * _pictureStore;
    RUITableView * _remoteTableViewController;
}

+ (bool)_shouldShowPictureInSection:(id)arg1;
+ (bool)shouldShowPicturesInPage:(id)arg1;

- (void).cxx_destruct;
- (void)_profilePictureStoreDidReload;
- (void)dealloc;
- (id)initWithTableView:(id)arg1 ruiTableView:(id)arg2 pictureStore:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;

@end

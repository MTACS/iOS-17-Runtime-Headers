
@interface _NTKCFaceDetailAlbumChooserViewController : PUAlbumListViewController {
    NSMutableArray * _allAlbums;
    <_NTKCFaceDetailAlbumChooserViewControllerDelegate> * _delegate;
    NTKCompanionSyncedAlbumEditor * _editor;
    NTKFace * _face;
    bool  _inGallery;
    PHAssetCollection * _selectedAlbum;
    PHAssetCollection * _syncedAlbum;
}

@property (nonatomic) <_NTKCFaceDetailAlbumChooserViewControllerDelegate> *delegate;
@property (nonatomic, retain) NTKCompanionSyncedAlbumEditor *editor;
@property (nonatomic, retain) NTKFace *face;
@property (nonatomic) bool inGallery;

+ (void)initialize;

- (void).cxx_destruct;
- (void)_appendCollectionsWithType:(long long)arg1 subtype:(long long)arg2;
- (void)_reloadData;
- (void)_set_allAlbums;
- (void)_set_selectedAlbum;
- (bool)_shouldShowAggregateItem;
- (id)_title;
- (id)delegate;
- (id)editor;
- (id)face;
- (bool)inGallery;
- (id)initWithPhotosEditor:(id)arg1 forFace:(id)arg2 inGallery:(bool)arg3;
- (void)sessionInfoStatusDidChange:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEditor:(id)arg1;
- (void)setFace:(id)arg1;
- (void)setInGallery:(bool)arg1;
- (bool)shouldShowAllPhotosItem;
- (bool)showAddNewAlbumPlaceholder;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)viewDidLoad;

@end

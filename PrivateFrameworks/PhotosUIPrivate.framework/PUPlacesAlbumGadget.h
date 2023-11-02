
@interface PUPlacesAlbumGadget : PUAlbumGadget <PXChangeObserver, PXPlacesSnapshotFactoryDelegate> {
    PUAlbumListCellContentView * _albumListCellContentView;
    PXPlacesAlbumCoverProvider * _placesAlbumCoverProvider;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PXPlacesAlbumCoverProvider *placesAlbumCoverProvider;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_extendedTraitCollectionDidChange:(unsigned long long)arg1;
- (void)_updateImageInContentView:(id)arg1 animated:(bool)arg2;
- (void)_updateSubtitleInContentView:(id)arg1 animated:(bool)arg2;
- (id)actionManager;
- (id)albumListCellContentView;
- (id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (id)placesAlbumCoverProvider;
- (void)placesSnapshotCountDidChange;
- (void)placesSnapshotDidChange;
- (id)title;

@end

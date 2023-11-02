
@interface PUPeopleAlbumGadget : PUAlbumGadget {
    PXPeopleAlbumProvider * _albumProvider;
}

@property (nonatomic, retain) PXPeopleAlbumProvider *albumProvider;

- (void).cxx_destruct;
- (void)_configureSubtitleForAlbumListCellContentView:(id)arg1;
- (void)_peopleAlbumChanged:(id)arg1;
- (void)_setSubtitleForPeopleCount:(long long)arg1 onAlbumListCellContentView:(id)arg2;
- (id)actionManager;
- (id)albumListCellContentView;
- (id)albumProvider;
- (void)contentViewWillAppear;
- (void)dealloc;
- (id)initWithCollection:(id)arg1 albumGadgetDelegate:(id)arg2;
- (void)reconfigure;
- (void)setAlbumProvider:(id)arg1;
- (id)title;

@end

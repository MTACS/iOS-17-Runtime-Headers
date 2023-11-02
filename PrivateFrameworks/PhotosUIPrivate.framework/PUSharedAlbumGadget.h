
@interface PUSharedAlbumGadget : PUAlbumGadget {
    PUAlbumListCellContentView * _albumCellContentView;
}

@property (nonatomic, retain) PUAlbumListCellContentView *albumCellContentView;

- (void).cxx_destruct;
- (id)albumCellContentView;
- (id)contentView;
- (void)setAlbumCellContentView:(id)arg1;

@end

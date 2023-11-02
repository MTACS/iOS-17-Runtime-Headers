
@interface MusicKit_SoftLinking_MPModelArtistKind : MusicKit_SoftLinking_MPModelKind {
    MusicKit_SoftLinking_MPModelAlbumKind * _albumKind;
}

@property (nonatomic, readonly, copy) MusicKit_SoftLinking_MPModelAlbumKind *albumKind;

- (void).cxx_destruct;
- (id)albumKind;
- (id)init;
- (id)initWithAlbumKind:(id)arg1;

@end

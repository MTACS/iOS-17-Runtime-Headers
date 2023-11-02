
@interface PGMusicGenreDistributionComputer : NSObject {
    bool  _useTaggedGenres;
}

@property (nonatomic) bool useTaggedGenres;

- (id)init;
- (id)musicGenreDistributionForGenres:(id)arg1;
- (void)setUseTaggedGenres:(bool)arg1;
- (bool)useTaggedGenres;

@end

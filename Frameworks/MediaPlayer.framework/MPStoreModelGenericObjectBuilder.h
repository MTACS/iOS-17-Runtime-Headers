
@interface MPStoreModelGenericObjectBuilder : MPStoreModelObjectBuilder {
    MPStoreModelAlbumBuilder * _albumBuilder;
    MPStoreModelArtistBuilder * _artistBuilder;
    NSMapTable * _baseContentItemIDToOccurrenceCount;
    MPStoreModelMovieBuilder * _movieBuilder;
    MPStoreModelPlaylistBuilder * _playlistBuilder;
    MPStoreModelRadioStationBuilder * _radioStationBuilder;
    MPStoreModelRecordLabelBuilder * _recordLabelBuilder;
    bool  _shouldUsePlaylistEntry;
    MPStoreModelSongBuilder * _songBuilder;
    MPStoreModelTVEpisodeBuilder * _tvEpisodeBuilder;
    MPStoreModelTVSeasonBuilder * _tvSeasonBuilder;
    MPStoreModelTVShowBuilder * _tvShowBuilder;
}

@property (nonatomic) bool shouldUsePlaylistEntry;

- (void).cxx_destruct;
- (id)_modelObjectWithUniqueContentItemIDForModelObject:(id)arg1;
- (id)modelObjectWithStoreItemMetadata:(id)arg1 sourceModelObject:(id)arg2 userIdentity:(id)arg3;
- (void)setPreventStoreItemMetadataCaching:(bool)arg1;
- (void)setShouldUsePlaylistEntry:(bool)arg1;
- (bool)shouldUsePlaylistEntry;

@end

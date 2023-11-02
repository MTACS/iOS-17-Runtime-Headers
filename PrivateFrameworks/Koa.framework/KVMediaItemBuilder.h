
@interface KVMediaItemBuilder : NSObject {
    KVItemBuilder * _builder;
    NSMutableArray * _fields;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)_buildMediaItemWithId:(id)arg1 otherFields:(id)arg2;
- (id)albumArtistItemWithName:(id)arg1 itemId:(id)arg2;
- (id)albumItemWithName:(id)arg1 itemId:(id)arg2 albumArtistId:(id)arg3;
- (id)audioBookArtistItemWithName:(id)arg1 itemId:(id)arg2;
- (id)audioBookItemWithName:(id)arg1 itemId:(id)arg2 artistId:(id)arg3;
- (id)genreItemWithName:(id)arg1 itemId:(id)arg2;
- (id)init;
- (id)movieItemWithName:(id)arg1 itemId:(id)arg2;
- (id)musicVideoItemWithName:(id)arg1 itemId:(id)arg2 albumArtistId:(id)arg3 songArtistId:(id)arg4 albumId:(id)arg5 genreId:(id)arg6;
- (id)playlistItemWithName:(id)arg1 itemId:(id)arg2;
- (id)songArtistItemWithName:(id)arg1 itemId:(id)arg2;
- (id)songItemWithName:(id)arg1 itemId:(id)arg2 albumArtistId:(id)arg3 songArtistId:(id)arg4 albumId:(id)arg5 genreId:(id)arg6;
- (id)tvEpisodeItemWithName:(id)arg1 itemId:(id)arg2 showId:(id)arg3;
- (id)tvShowItemWithName:(id)arg1 itemId:(id)arg2;

@end

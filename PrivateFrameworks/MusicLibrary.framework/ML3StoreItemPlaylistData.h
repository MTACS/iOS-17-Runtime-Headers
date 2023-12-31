
@interface ML3StoreItemPlaylistData : NSObject {
    NSArray * _lookupItems;
    NSArray * _parsedPlaylistsImportProperties;
    NSData * _playlistData;
}

@property (nonatomic, readonly) NSArray *parsedStorePlaylistsImportProperties;
@property (nonatomic, readonly) unsigned long long playlistCount;
@property (nonatomic, readonly) NSData *playlistsData;

- (void).cxx_destruct;
- (id)_bestArtworkImageURLFromStoreArtworkVariants:(id)arg1 cropStyle:(id)arg2;
- (id)_bestPlaylistArtworkImageURLFromStoreArtworkVariants:(id)arg1;
- (id)_playlistPropertiesForLookupItems:(id)arg1;
- (id)_playlistPropertiesFromPlaylistData:(id)arg1;
- (id)initWithLookupItems:(id)arg1;
- (id)initWithPlaylistsData:(id)arg1;
- (id)parsedStorePlaylistsImportProperties;
- (unsigned long long)playlistCount;
- (id)playlistsData;

@end

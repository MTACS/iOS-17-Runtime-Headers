
@interface ML3StoreItemAlbumArtistData : NSObject {
    NSData * _albumArtistData;
    NSArray * _lookupItems;
    NSArray * _parsedStoreAlbumArtistImportProperties;
    NSDictionary * _trackItemImportProperties;
}

@property (nonatomic, readonly) unsigned long long albumArtistCount;
@property (nonatomic, readonly) NSData *albumArtistData;
@property (nonatomic, readonly) NSArray *parsedStoreAlbumArtistImportProperties;

- (void).cxx_destruct;
- (id)_parsedStoreAlbumArtistItemsImportPropertiesFromLookupItems;
- (id)_parsedStoreAlbumArtistItemsImportPropertiesFromSerializedLookupItems;
- (id)_parsedStoreAlbumArtistItemsImportPropertiesFromTrackImportItems;
- (unsigned long long)albumArtistCount;
- (id)albumArtistData;
- (id)initWithAlbumArtistData:(id)arg1;
- (id)initWithLookupItems:(id)arg1;
- (id)initWithTrackItemImportProperties:(id)arg1;
- (id)parsedStoreAlbumArtistImportProperties;

@end

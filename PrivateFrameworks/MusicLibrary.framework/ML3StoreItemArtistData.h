
@interface ML3StoreItemArtistData : NSObject {
    NSDictionary * _parsedStoreArtistImportProperties;
    NSDictionary * _trackItemImportProperties;
}

@property (nonatomic, readonly) NSDictionary *parsedStoreArtistItemImportProperties;

- (void).cxx_destruct;
- (id)initWithTrackImportItem:(id)arg1;
- (id)parsedStoreArtistItemImportProperties;

@end

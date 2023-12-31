
@interface MPMediaLibraryAlbumAppData : NSObject {
    NSDictionary * _appDataDict;
    NSMutableDictionary * _dirtyPopularityDict;
    long long  _version;
}

@property (nonatomic, readonly) long long version;

- (void).cxx_destruct;
- (id)createAppDataDictionary;
- (id)init;
- (id)initWithAppDataDictionary:(id)arg1;
- (void)setSongPopularity:(id)arg1 forAdamID:(long long)arg2;
- (void)setSongPopularity:(id)arg1 forIdentifierSet:(id)arg2;
- (id)songPopularityForAdamID:(long long)arg1;
- (id)songPopularityForIdentifiers:(id)arg1;
- (long long)version;

@end

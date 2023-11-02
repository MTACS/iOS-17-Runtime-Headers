
@interface VUIMediaEntitiesDataSource : VUILibraryDataSource {
    NSDictionary * _artworkInfoDictionaryByPurchaseID;
    VUIMediaEntityFetchRequest * _fetchRequest;
    NSArray * _grouping;
    NSArray * _mediaEntities;
    bool  _shouldAutoFetchArtworkInfoDictionaries;
    bool  _shouldPauseAutoFetchingArtworkInfoDictionaries;
}

@property (nonatomic, retain) NSDictionary *artworkInfoDictionaryByPurchaseID;
@property (nonatomic, retain) VUIMediaEntityFetchRequest *fetchRequest;
@property (nonatomic, retain) NSArray *grouping;
@property (nonatomic, retain) NSArray *mediaEntities;
@property (nonatomic) bool shouldAutoFetchArtworkInfoDictionaries;
@property (nonatomic) bool shouldPauseAutoFetchingArtworkInfoDictionaries;

- (void).cxx_destruct;
- (id)artworkInfoDictionaryByPurchaseID;
- (id)fetchRequest;
- (id)grouping;
- (id)initWithFetchRequest:(id)arg1;
- (id)mediaEntities;
- (void)setArtworkInfoDictionaryByPurchaseID:(id)arg1;
- (void)setFetchRequest:(id)arg1;
- (void)setGrouping:(id)arg1;
- (void)setMediaEntities:(id)arg1;
- (void)setShouldAutoFetchArtworkInfoDictionaries:(bool)arg1;
- (void)setShouldPauseAutoFetchingArtworkInfoDictionaries:(bool)arg1;
- (bool)shouldAutoFetchArtworkInfoDictionaries;
- (bool)shouldPauseAutoFetchingArtworkInfoDictionaries;

@end

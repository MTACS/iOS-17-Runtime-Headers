
@interface VUIDocumentContextDataTVShow : VUIDocumentContextData {
    NSString * _adamID;
    NSString * _episodeID;
    bool  _needsAdamIdToCanonicalIdConversion;
    NSString * _showID;
}

@property (nonatomic, readonly, copy) NSString *adamID;
@property (nonatomic, readonly, copy) NSString *episodeID;
@property (nonatomic) bool needsAdamIdToCanonicalIdConversion;
@property (nonatomic, readonly, copy) NSString *showID;

- (void).cxx_destruct;
- (id)adamID;
- (id)episodeID;
- (id)initWithAdamID:(id)arg1;
- (id)initWithShowID:(id)arg1 episodeID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)needsAdamIdToCanonicalIdConversion;
- (void)setNeedsAdamIdToCanonicalIdConversion:(bool)arg1;
- (id)showID;

@end


@interface PGMusicCurationFeatures : NSObject {
    void consistentHash;
    void curatorEvents;
    void eventCollectionDuration;
    void eventRatioByLanguageCode;
    void inferredUserLanguageCodes;
    void location;
    void maestroSongScoresBySongID;
    void memoryCategory;
    void memorySubcategory;
    void mostFrequentMeaningLabel;
    void performerIdentifiers;
    void scoreByAssetCollectionMaestroKeyword;
    void shouldAvoidColorGrading;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool shouldAvoidColorGrading;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (bool)shouldAvoidColorGrading;

@end

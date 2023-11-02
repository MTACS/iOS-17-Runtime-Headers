
@interface PPPBFeedbackLog : PBCodable <NSCopying> {
    NSString * _assetVersion;
    NSMutableArray * _experimentalGroups;
    NSMutableArray * _extractedDonations;
    PPPBFeedbackMetadata * _feedbackMetadata;
    struct { 
        unsigned int predictionType : 1; 
    }  _has;
    NSString * _homeLocationGeohash;
    int  _predictionType;
    NSMutableArray * _scoredItems;
}

@property (nonatomic, retain) NSString *assetVersion;
@property (nonatomic, retain) NSMutableArray *experimentalGroups;
@property (nonatomic, retain) NSMutableArray *extractedDonations;
@property (nonatomic, retain) PPPBFeedbackMetadata *feedbackMetadata;
@property (nonatomic, readonly) bool hasAssetVersion;
@property (nonatomic, readonly) bool hasFeedbackMetadata;
@property (nonatomic, readonly) bool hasHomeLocationGeohash;
@property (nonatomic) bool hasPredictionType;
@property (nonatomic, retain) NSString *homeLocationGeohash;
@property (nonatomic) int predictionType;
@property (nonatomic, retain) NSMutableArray *scoredItems;

+ (Class)experimentalGroupsType;
+ (Class)extractedDonationsType;
+ (Class)scoredItemsType;

- (void).cxx_destruct;
- (void)addExperimentalGroups:(id)arg1;
- (void)addExtractedDonations:(id)arg1;
- (void)addScoredItems:(id)arg1;
- (id)assetVersion;
- (void)clearExperimentalGroups;
- (void)clearExtractedDonations;
- (void)clearScoredItems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentalGroups;
- (id)experimentalGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)experimentalGroupsCount;
- (id)extractedDonations;
- (id)extractedDonationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)extractedDonationsCount;
- (id)feedbackMetadata;
- (bool)hasAssetVersion;
- (bool)hasFeedbackMetadata;
- (bool)hasHomeLocationGeohash;
- (bool)hasPredictionType;
- (unsigned long long)hash;
- (id)homeLocationGeohash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)predictionType;
- (bool)readFrom:(id)arg1;
- (id)scoredItems;
- (id)scoredItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)scoredItemsCount;
- (void)setAssetVersion:(id)arg1;
- (void)setExperimentalGroups:(id)arg1;
- (void)setExtractedDonations:(id)arg1;
- (void)setFeedbackMetadata:(id)arg1;
- (void)setHasPredictionType:(bool)arg1;
- (void)setHomeLocationGeohash:(id)arg1;
- (void)setPredictionType:(int)arg1;
- (void)setScoredItems:(id)arg1;
- (void)writeTo:(id)arg1;

@end

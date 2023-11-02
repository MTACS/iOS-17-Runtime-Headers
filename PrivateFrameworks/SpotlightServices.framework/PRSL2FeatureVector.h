
@interface PRSL2FeatureVector : NSObject <NSCopying> {
    NSString * _bundleID;
    struct PRSL2FeatureScoreSmallCache { 
        unsigned short features[32]; 
        float scores[32]; 
        unsigned short count; 
    }  _cache;
    NSString * _device_type;
    float  _experimentalScore;
    void * _featureData;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _featureDataLock;
    unsigned short  _featureDataSize;
    unsigned char  _flags;
    /* Warning: Unrecognized filer type: 'T' using 'void*' */ void* _indexScore;
    float  _originalL2Score;
    PRSRankingItem * _rankingItem;
    NSDictionary * _roundTripFeatures;
    NSDictionary * _searchThroughCEPData;
    unsigned char  _values;
    float  _withinBundleScore;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, retain) NSString *device_type;
@property (nonatomic) bool displayNameFuzzySpecialInsertion;
@property (nonatomic) float experimentalScore;
@property (nonatomic) /* Warning: Unrecognized filer type: 'T' using 'void*' */ void*indexScore;
@property (nonatomic) bool isAppInDock;
@property (nonatomic) bool isSiriAction;
@property (nonatomic) float originalL2Score;
@property (nonatomic) PRSRankingItem *rankingItem;
@property (nonatomic, readonly) bool receiverIsVip;
@property (nonatomic, retain) NSDictionary *roundTripFeatures;
@property (nonatomic, retain) NSDictionary *searchThroughCEPData;
@property (nonatomic, readonly) bool senderIsVip;
@property (nonatomic, readonly) bool vipSenderMatchesQuery;
@property (nonatomic) float withinBundleScore;

+ (id)contextWithFeatureOrder:(id)arg1 withInflation:(unsigned long long)arg2 withInflatedIndexToSize:(id)arg3;
+ (struct FeatureInfo { id x1; unsigned short x2; unsigned char x3; }*)featureForName:(id)arg1;
+ (struct __CFSet { }*)getL2FeatureSet;
+ (void)initialize;

- (void).cxx_destruct;
- (id)_dictionaryRepresentationWithoutDefaultValues:(bool)arg1;
- (id)bundleID;
- (void)cleanup;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)device_type;
- (id)dictionaryRepresentation;
- (id)dictionaryRepresentationWithoutDefaultValues;
- (bool)displayNameFuzzySpecialInsertion;
- (float)experimentalScore;
- (float*)getAllScores:(float)arg1;
- (/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)indexScore;
- (id)init;
- (id)initWithCache:(struct PRSL2FeatureScoreSmallCache { unsigned short x1[32]; float x2[32]; unsigned short x3; })arg1 featureData:(void*)arg2 featureDataSize:(unsigned short)arg3 flags:(unsigned char)arg4 values:(unsigned char)arg5;
- (bool)isAppInDock;
- (bool)isSiriAction;
- (float)originalL2Score;
- (id)rankingItem;
- (bool)receiverIsVip;
- (void)restoreFromJazzkonPlusHacks:(float*)arg1;
- (id)roundTripFeatures;
- (float)scoreForFeature:(unsigned short)arg1;
- (id)searchThroughCEPData;
- (bool)senderIsVip;
- (bool)serializeToJSON:(void*)arg1 options:(long long)arg2;
- (void)setAllDisplayNameFeatures:(float*)arg1 withValue:(float)arg2;
- (void)setBundleID:(id)arg1;
- (void)setDevice_type:(id)arg1;
- (void)setDisplayNameFuzzySpecialInsertion:(bool)arg1;
- (void)setExperimentalScore:(float)arg1;
- (void)setIndexScore:(/* Warning: Unrecognized filer type: 'T' using 'void*' */ void*)arg1;
- (void)setIsAppInDock:(bool)arg1;
- (void)setIsSiriAction:(bool)arg1;
- (void)setOriginalL2Score:(float)arg1;
- (void)setRankingItem:(id)arg1;
- (void)setRoundTripFeatures:(id)arg1;
- (void)setScores:(float*)arg1 forFeatures:(unsigned short*)arg2 count:(unsigned long long)arg3;
- (void)setSearchThroughCEPData:(id)arg1;
- (void)setWithinBundleScore:(float)arg1;
- (void)swapAllContentCreationDateFeatures:(float*)arg1;
- (void)swapAllLastUsedDateFeatures:(float*)arg1;
- (void)swapAllRecenyFeatures:(float*)arg1;
- (void)swapFeature:(unsigned short)arg1 withSubstitute:(unsigned short)arg2 scores:(float*)arg3;
- (bool)vipSenderMatchesQuery;
- (float)withinBundleScore;

@end

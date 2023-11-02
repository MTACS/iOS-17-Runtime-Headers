
@interface BMMomentsEngagementBundleSummary : BMEventBase <BMStoreData> {
    NSArray * _attachedPhotoAssets;
    NSString * _bundleEvergreenType;
    NSString * _bundleInterfaceType;
    bool  _hasRankingScore;
    bool  _hasRaw_endDate;
    bool  _hasRaw_startDate;
    BMMomentsEngagementSuggestionIdentifier * _identifier;
    int  _interfaceType;
    double  _rankingScore;
    double  _raw_endDate;
    double  _raw_startDate;
}

@property (nonatomic, readonly) NSArray *attachedPhotoAssets;
@property (nonatomic, readonly) NSString *bundleEvergreenType;
@property (nonatomic, readonly) NSString *bundleInterfaceType;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic) bool hasRankingScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) BMMomentsEngagementSuggestionIdentifier *identifier;
@property (nonatomic, readonly) int interfaceType;
@property (nonatomic, readonly) double rankingScore;
@property (nonatomic, readonly) NSDate *startDate;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_attachedPhotoAssetsJSONArray;
- (id)attachedPhotoAssets;
- (id)bundleEvergreenType;
- (id)bundleInterfaceType;
- (unsigned int)dataVersion;
- (id)description;
- (id)endDate;
- (bool)hasRankingScore;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 interfaceType:(int)arg4 rankingScore:(id)arg5 attachedPhotoAssets:(id)arg6;
- (id)initWithIdentifier:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 interfaceType:(int)arg4 rankingScore:(id)arg5 attachedPhotoAssets:(id)arg6 bundleInterfaceType:(id)arg7 bundleEvergreenType:(id)arg8;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (int)interfaceType;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (double)rankingScore;
- (id)serialize;
- (void)setHasRankingScore:(bool)arg1;
- (id)startDate;
- (void)writeTo:(id)arg1;

@end

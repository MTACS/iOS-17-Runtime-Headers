
@interface BMPortraitEntity : BMEventBase <BMStoreData> {
    int  _algorithm;
    int  _assetVersion;
    NSString * _bestLanguage;
    int  _category;
    double  _decayRate;
    bool  _hasAssetVersion;
    bool  _hasDecayRate;
    bool  _hasScore;
    bool  _hasSentimentScore;
    NSString * _name;
    NSString * _osBuild;
    double  _score;
    double  _sentimentScore;
}

@property (nonatomic, readonly) int algorithm;
@property (nonatomic, readonly) int assetVersion;
@property (nonatomic, readonly) NSString *bestLanguage;
@property (nonatomic, readonly) int category;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double decayRate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAssetVersion;
@property (nonatomic) bool hasDecayRate;
@property (nonatomic) bool hasScore;
@property (nonatomic) bool hasSentimentScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *osBuild;
@property (nonatomic, readonly) double score;
@property (nonatomic, readonly) double sentimentScore;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)algorithm;
- (int)assetVersion;
- (id)bestLanguage;
- (int)category;
- (unsigned int)dataVersion;
- (double)decayRate;
- (id)description;
- (bool)hasAssetVersion;
- (bool)hasDecayRate;
- (bool)hasScore;
- (bool)hasSentimentScore;
- (id)initByReadFrom:(id)arg1;
- (id)initWithCategory:(int)arg1 algorithm:(int)arg2 decayRate:(id)arg3 score:(id)arg4 osBuild:(id)arg5 assetVersion:(id)arg6 name:(id)arg7 bestLanguage:(id)arg8 sentimentScore:(id)arg9;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)name;
- (id)osBuild;
- (double)score;
- (double)sentimentScore;
- (id)serialize;
- (void)setHasAssetVersion:(bool)arg1;
- (void)setHasDecayRate:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)setHasSentimentScore:(bool)arg1;
- (void)writeTo:(id)arg1;

@end


@interface BMPortraitTopic : BMEventBase <BMStoreData> {
    int  _algorithm;
    int  _assetVersion;
    double  _decayRate;
    bool  _hasAssetVersion;
    bool  _hasDecayRate;
    bool  _hasScore;
    NSString * _identifier;
    NSString * _osBuild;
    double  _score;
}

@property (nonatomic, readonly) int algorithm;
@property (nonatomic, readonly) int assetVersion;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double decayRate;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasAssetVersion;
@property (nonatomic) bool hasDecayRate;
@property (nonatomic) bool hasScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *osBuild;
@property (nonatomic, readonly) double score;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (int)algorithm;
- (int)assetVersion;
- (unsigned int)dataVersion;
- (double)decayRate;
- (id)description;
- (bool)hasAssetVersion;
- (bool)hasDecayRate;
- (bool)hasScore;
- (id)identifier;
- (id)initByReadFrom:(id)arg1;
- (id)initWithIdentifier:(id)arg1 algorithm:(int)arg2 decayRate:(id)arg3 score:(id)arg4 osBuild:(id)arg5 assetVersion:(id)arg6;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (id)osBuild;
- (double)score;
- (id)serialize;
- (void)setHasAssetVersion:(bool)arg1;
- (void)setHasDecayRate:(bool)arg1;
- (void)setHasScore:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

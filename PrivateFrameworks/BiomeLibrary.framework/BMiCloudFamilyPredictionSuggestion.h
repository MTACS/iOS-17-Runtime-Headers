
@interface BMiCloudFamilyPredictionSuggestion : BMEventBase <BMStoreData> {
    bool  _hasScore;
    NSString * _heuristicFamilyRelation;
    double  _score;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasScore;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *heuristicFamilyRelation;
@property (nonatomic, readonly) double score;
@property (readonly) Class superclass;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasScore;
- (id)heuristicFamilyRelation;
- (id)initByReadFrom:(id)arg1;
- (id)initWithHeuristicFamilyRelation:(id)arg1 score:(id)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDictionary;
- (double)score;
- (id)serialize;
- (void)setHasScore:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

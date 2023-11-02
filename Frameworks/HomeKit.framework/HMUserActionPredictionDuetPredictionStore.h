
@interface HMUserActionPredictionDuetPredictionStore : PBCodable <NSCopying> {
    NSMutableArray * _predictions;
}

@property (nonatomic, retain) NSMutableArray *predictions;

+ (Class)predictionType;

- (void).cxx_destruct;
- (void)addPrediction:(id)arg1;
- (void)clearPredictions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)predictionAtIndex:(unsigned long long)arg1;
- (id)predictions;
- (unsigned long long)predictionsCount;
- (bool)readFrom:(id)arg1;
- (void)setPredictions:(id)arg1;
- (void)writeTo:(id)arg1;

@end

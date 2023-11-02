
@interface SIRINLUINTERNALOvertonKGSpanData : PBCodable <NSCopying> {
    double  _confidence;
    NSMutableArray * _features;
    struct { 
        unsigned int confidence : 1; 
    }  _has;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) NSMutableArray *features;
@property (nonatomic) bool hasConfidence;

+ (Class)featuresType;

- (void).cxx_destruct;
- (void)addFeatures:(id)arg1;
- (void)clearFeatures;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)features;
- (id)featuresAtIndex:(unsigned long long)arg1;
- (unsigned long long)featuresCount;
- (bool)hasConfidence;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setFeatures:(id)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

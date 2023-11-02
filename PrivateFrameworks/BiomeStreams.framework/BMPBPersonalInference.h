
@interface BMPBPersonalInference : PBCodable <NSCopying> {
    double  _confidence;
    BMPBPersonalFact * _fact;
    struct { 
        unsigned int confidence : 1; 
        unsigned int modelVersion : 1; 
    }  _has;
    unsigned int  _modelVersion;
    NSMutableArray * _qualifiers;
}

@property (nonatomic) double confidence;
@property (nonatomic, retain) BMPBPersonalFact *fact;
@property (nonatomic) bool hasConfidence;
@property (nonatomic, readonly) bool hasFact;
@property (nonatomic) bool hasModelVersion;
@property (nonatomic) unsigned int modelVersion;
@property (nonatomic, retain) NSMutableArray *qualifiers;

+ (Class)qualifiersType;

- (void).cxx_destruct;
- (void)addQualifiers:(id)arg1;
- (void)clearQualifiers;
- (double)confidence;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fact;
- (bool)hasConfidence;
- (bool)hasFact;
- (bool)hasModelVersion;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)modelVersion;
- (id)qualifiers;
- (id)qualifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)qualifiersCount;
- (bool)readFrom:(id)arg1;
- (void)setConfidence:(double)arg1;
- (void)setFact:(id)arg1;
- (void)setHasConfidence:(bool)arg1;
- (void)setHasModelVersion:(bool)arg1;
- (void)setModelVersion:(unsigned int)arg1;
- (void)setQualifiers:(id)arg1;
- (void)writeTo:(id)arg1;

@end

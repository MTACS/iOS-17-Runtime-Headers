
@interface BMPBProbabilityPerLabel : PBCodable <NSCopying> {
    struct { 
        unsigned int probability : 1; 
    }  _has;
    NSString * _label;
    double  _probability;
}

@property (nonatomic, readonly) bool hasLabel;
@property (nonatomic) bool hasProbability;
@property (nonatomic, retain) NSString *label;
@property (nonatomic) double probability;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLabel;
- (bool)hasProbability;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)label;
- (void)mergeFrom:(id)arg1;
- (double)probability;
- (bool)readFrom:(id)arg1;
- (void)setHasProbability:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setProbability:(double)arg1;
- (void)writeTo:(id)arg1;

@end

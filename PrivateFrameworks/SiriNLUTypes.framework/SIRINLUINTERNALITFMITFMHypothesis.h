
@interface SIRINLUINTERNALITFMITFMHypothesis : PBCodable <NSCopying> {
    struct { 
        unsigned int label : 1; 
        unsigned int probability : 1; 
    }  _has;
    int  _label;
    float  _probability;
    NSString * _stringLabel;
}

@property (nonatomic) bool hasLabel;
@property (nonatomic) bool hasProbability;
@property (nonatomic, readonly) bool hasStringLabel;
@property (nonatomic) int label;
@property (nonatomic) float probability;
@property (nonatomic, retain) NSString *stringLabel;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLabel;
- (bool)hasProbability;
- (bool)hasStringLabel;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)label;
- (void)mergeFrom:(id)arg1;
- (float)probability;
- (bool)readFrom:(id)arg1;
- (void)setHasLabel:(bool)arg1;
- (void)setHasProbability:(bool)arg1;
- (void)setLabel:(int)arg1;
- (void)setProbability:(float)arg1;
- (void)setStringLabel:(id)arg1;
- (id)stringLabel;
- (void)writeTo:(id)arg1;

@end

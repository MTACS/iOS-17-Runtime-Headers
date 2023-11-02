
@interface SGM2CustomResponsesHarvest : PBCodable <NSCopying> {
    unsigned int  _customResponsesAfterPruning;
    struct { 
        unsigned int customResponsesAfterPruning : 1; 
    }  _has;
}

@property (nonatomic) unsigned int customResponsesAfterPruning;
@property (nonatomic) bool hasCustomResponsesAfterPruning;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)customResponsesAfterPruning;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCustomResponsesAfterPruning;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCustomResponsesAfterPruning:(unsigned int)arg1;
- (void)setHasCustomResponsesAfterPruning:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

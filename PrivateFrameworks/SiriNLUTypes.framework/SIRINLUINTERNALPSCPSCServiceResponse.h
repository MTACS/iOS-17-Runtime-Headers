
@interface SIRINLUINTERNALPSCPSCServiceResponse : PBCodable <NSCopying> {
    struct { 
        unsigned int pommesProbability : 1; 
    }  _has;
    float  _pommesProbability;
}

@property (nonatomic) bool hasPommesProbability;
@property (nonatomic) float pommesProbability;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasPommesProbability;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (float)pommesProbability;
- (bool)readFrom:(id)arg1;
- (void)setHasPommesProbability:(bool)arg1;
- (void)setPommesProbability:(float)arg1;
- (void)writeTo:(id)arg1;

@end

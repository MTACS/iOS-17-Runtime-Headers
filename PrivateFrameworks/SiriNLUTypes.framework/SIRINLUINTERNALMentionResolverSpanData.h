
@interface SIRINLUINTERNALMentionResolverSpanData : PBCodable <NSCopying> {
    struct { 
        unsigned int jointScore : 1; 
        unsigned int modelScore : 1; 
    }  _has;
    double  _jointScore;
    double  _modelScore;
}

@property (nonatomic) bool hasJointScore;
@property (nonatomic) bool hasModelScore;
@property (nonatomic) double jointScore;
@property (nonatomic) double modelScore;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasJointScore;
- (bool)hasModelScore;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (double)jointScore;
- (void)mergeFrom:(id)arg1;
- (double)modelScore;
- (bool)readFrom:(id)arg1;
- (void)setHasJointScore:(bool)arg1;
- (void)setHasModelScore:(bool)arg1;
- (void)setJointScore:(double)arg1;
- (void)setModelScore:(double)arg1;
- (void)writeTo:(id)arg1;

@end

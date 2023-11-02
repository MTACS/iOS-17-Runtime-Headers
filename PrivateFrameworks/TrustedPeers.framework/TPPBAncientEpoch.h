
@interface TPPBAncientEpoch : PBCodable <NSCopying> {
    unsigned long long  _candidateEpoch;
    struct { 
        unsigned int candidateEpoch : 1; 
        unsigned int myEpoch : 1; 
    }  _has;
    unsigned long long  _myEpoch;
}

@property (nonatomic) unsigned long long candidateEpoch;
@property (nonatomic) bool hasCandidateEpoch;
@property (nonatomic) bool hasMyEpoch;
@property (nonatomic) unsigned long long myEpoch;

- (unsigned long long)candidateEpoch;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCandidateEpoch;
- (bool)hasMyEpoch;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)myEpoch;
- (bool)readFrom:(id)arg1;
- (void)setCandidateEpoch:(unsigned long long)arg1;
- (void)setHasCandidateEpoch:(bool)arg1;
- (void)setHasMyEpoch:(bool)arg1;
- (void)setMyEpoch:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

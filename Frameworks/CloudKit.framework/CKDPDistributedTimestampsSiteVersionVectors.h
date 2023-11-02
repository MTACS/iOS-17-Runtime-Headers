
@interface CKDPDistributedTimestampsSiteVersionVectors : PBCodable <NSCopying> {
    CKDPDistributedTimestampsVersionVector * _contentsVector;
    CKDPDistributedTimestampsVersionVector * _dependenciesVector;
    CKDPDistributedTimestampsVersionVector * _previousVector;
    CKDPDistributedTimestampsVersionVector * _removalsVector;
}

@property (nonatomic, retain) CKDPDistributedTimestampsVersionVector *contentsVector;
@property (nonatomic, retain) CKDPDistributedTimestampsVersionVector *dependenciesVector;
@property (nonatomic, readonly) bool hasContentsVector;
@property (nonatomic, readonly) bool hasDependenciesVector;
@property (nonatomic, readonly) bool hasPreviousVector;
@property (nonatomic, readonly) bool hasRemovalsVector;
@property (nonatomic, retain) CKDPDistributedTimestampsVersionVector *previousVector;
@property (nonatomic, retain) CKDPDistributedTimestampsVersionVector *removalsVector;

- (void).cxx_destruct;
- (id)contentsVector;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dependenciesVector;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContentsVector;
- (bool)hasDependenciesVector;
- (bool)hasPreviousVector;
- (bool)hasRemovalsVector;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)previousVector;
- (bool)readFrom:(id)arg1;
- (id)removalsVector;
- (void)setContentsVector:(id)arg1;
- (void)setDependenciesVector:(id)arg1;
- (void)setPreviousVector:(id)arg1;
- (void)setRemovalsVector:(id)arg1;
- (void)writeTo:(id)arg1;

@end

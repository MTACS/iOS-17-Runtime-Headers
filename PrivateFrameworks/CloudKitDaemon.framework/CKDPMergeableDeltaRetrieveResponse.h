
@interface CKDPMergeableDeltaRetrieveResponse : PBCodable <NSCopying> {
    NSData * _continuation;
    NSMutableArray * _deltas;
}

@property (nonatomic, retain) NSData *continuation;
@property (nonatomic, retain) NSMutableArray *deltas;
@property (nonatomic, readonly) bool hasContinuation;

+ (Class)deltasType;

- (void).cxx_destruct;
- (void)addDeltas:(id)arg1;
- (void)clearDeltas;
- (id)continuation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deltas;
- (id)deltasAtIndex:(unsigned long long)arg1;
- (unsigned long long)deltasCount;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContinuation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setContinuation:(id)arg1;
- (void)setDeltas:(id)arg1;
- (void)writeTo:(id)arg1;

@end

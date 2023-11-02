
@interface CKDPMergeableDeltaMetadataRetrieveResponse : PBCodable <NSCopying> {
    NSData * _continuation;
    NSMutableArray * _metadatas;
}

@property (nonatomic, retain) NSData *continuation;
@property (nonatomic, readonly) bool hasContinuation;
@property (nonatomic, retain) NSMutableArray *metadatas;

+ (Class)metadataType;

- (void).cxx_destruct;
- (void)addMetadata:(id)arg1;
- (void)clearMetadatas;
- (id)continuation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContinuation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadataAtIndex:(unsigned long long)arg1;
- (id)metadatas;
- (unsigned long long)metadatasCount;
- (bool)readFrom:(id)arg1;
- (void)setContinuation:(id)arg1;
- (void)setMetadatas:(id)arg1;
- (void)writeTo:(id)arg1;

@end

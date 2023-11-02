
@interface NPKProtoPassSyncReconciledStateAccepted : PBCodable <NSCopying> {
    NSData * _reconciledStateHash;
}

@property (nonatomic, readonly) bool hasReconciledStateHash;
@property (nonatomic, retain) NSData *reconciledStateHash;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasReconciledStateHash;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)reconciledStateHash;
- (void)setReconciledStateHash:(id)arg1;
- (void)writeTo:(id)arg1;

@end

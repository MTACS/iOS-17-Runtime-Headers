
@interface NPKProtoPassSyncProposedReconciledState : PBCodable <NSCopying> {
    NPKProtoPassSyncState * _proposedReconciledState;
}

@property (nonatomic, readonly) bool hasProposedReconciledState;
@property (nonatomic, retain) NPKProtoPassSyncState *proposedReconciledState;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasProposedReconciledState;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)proposedReconciledState;
- (bool)readFrom:(id)arg1;
- (void)setProposedReconciledState:(id)arg1;
- (void)writeTo:(id)arg1;

@end

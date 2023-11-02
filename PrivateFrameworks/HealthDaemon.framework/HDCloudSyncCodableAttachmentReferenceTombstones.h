
@interface HDCloudSyncCodableAttachmentReferenceTombstones : PBCodable <NSCopying> {
    NSMutableArray * _attachmentReferenceTombstones;
}

@property (nonatomic, retain) NSMutableArray *attachmentReferenceTombstones;

+ (Class)attachmentReferenceTombstoneType;

- (void).cxx_destruct;
- (void)addAttachmentReferenceTombstone:(id)arg1;
- (id)attachmentReferenceTombstoneAtIndex:(unsigned long long)arg1;
- (id)attachmentReferenceTombstones;
- (unsigned long long)attachmentReferenceTombstonesCount;
- (void)clearAttachmentReferenceTombstones;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAttachmentReferenceTombstones:(id)arg1;
- (void)writeTo:(id)arg1;

@end

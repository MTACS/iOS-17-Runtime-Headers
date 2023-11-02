
@interface CKDPMoveOplockFailure : PBCodable <NSCopying> {
    CKDPRecordIdentifier * _movedRecordDestinationIdentifier;
}

@property (nonatomic, readonly) bool hasMovedRecordDestinationIdentifier;
@property (nonatomic, retain) CKDPRecordIdentifier *movedRecordDestinationIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMovedRecordDestinationIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)movedRecordDestinationIdentifier;
- (bool)readFrom:(id)arg1;
- (void)setMovedRecordDestinationIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

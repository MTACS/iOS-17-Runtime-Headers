
@interface CKDPRecordMoveResponse : PBCodable <NSCopying> {
    CKDPRecord * _moveMarker;
    CKDPRecord * _movedRecord;
}

@property (nonatomic, readonly) bool hasMoveMarker;
@property (nonatomic, readonly) bool hasMovedRecord;
@property (nonatomic, retain) CKDPRecord *moveMarker;
@property (nonatomic, retain) CKDPRecord *movedRecord;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMoveMarker;
- (bool)hasMovedRecord;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)moveMarker;
- (id)movedRecord;
- (bool)readFrom:(id)arg1;
- (void)setMoveMarker:(id)arg1;
- (void)setMovedRecord:(id)arg1;
- (void)writeTo:(id)arg1;

@end

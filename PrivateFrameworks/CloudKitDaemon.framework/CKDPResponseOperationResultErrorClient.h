
@interface CKDPResponseOperationResultErrorClient : PBCodable <NSCopying> {
    struct { 
        unsigned int type : 1; 
    }  _has;
    CKDPMoveOplockFailure * _moveOplockFailure;
    CKDPOplockFailure * _oplockFailure;
    int  _type;
    CKDPUniqueFieldFailure * _uniqueFieldFailure;
}

@property (nonatomic, readonly) bool hasMoveOplockFailure;
@property (nonatomic, readonly) bool hasOplockFailure;
@property (nonatomic) bool hasType;
@property (nonatomic, readonly) bool hasUniqueFieldFailure;
@property (nonatomic, retain) CKDPMoveOplockFailure *moveOplockFailure;
@property (nonatomic, retain) CKDPOplockFailure *oplockFailure;
@property (nonatomic) int type;
@property (nonatomic, retain) CKDPUniqueFieldFailure *uniqueFieldFailure;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (id)_typeCKLogValue;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasMoveOplockFailure;
- (bool)hasOplockFailure;
- (bool)hasType;
- (bool)hasUniqueFieldFailure;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)moveOplockFailure;
- (id)oplockFailure;
- (bool)readFrom:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setMoveOplockFailure:(id)arg1;
- (void)setOplockFailure:(id)arg1;
- (void)setType:(int)arg1;
- (void)setUniqueFieldFailure:(id)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)uniqueFieldFailure;
- (void)writeTo:(id)arg1;

@end

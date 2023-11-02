
@interface CKDPRealTimeMessageDeleteRecordID : PBCodable <NSCopying> {
    CKDPRecordIdentifier * _recordIdentifier;
}

@property (nonatomic, readonly) bool hasRecordIdentifier;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRecordIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (void)setRecordIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

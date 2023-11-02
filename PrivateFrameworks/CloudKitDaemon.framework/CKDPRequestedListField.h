
@interface CKDPRequestedListField : PBCodable <NSCopying> {
    CKDPRecordFieldIdentifier * _fieldId;
    NSMutableArray * _ranges;
}

@property (nonatomic, retain) CKDPRecordFieldIdentifier *fieldId;
@property (nonatomic, readonly) bool hasFieldId;
@property (nonatomic, retain) NSMutableArray *ranges;

+ (Class)rangeType;

- (void).cxx_destruct;
- (void)_CKLogToFileHandle:(id)arg1 atDepth:(int)arg2;
- (void)addRange:(id)arg1;
- (void)clearRanges;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldId;
- (bool)hasFieldId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)rangeAtIndex:(unsigned long long)arg1;
- (id)ranges;
- (unsigned long long)rangesCount;
- (bool)readFrom:(id)arg1;
- (void)setFieldId:(id)arg1;
- (void)setRanges:(id)arg1;
- (void)writeTo:(id)arg1;

@end

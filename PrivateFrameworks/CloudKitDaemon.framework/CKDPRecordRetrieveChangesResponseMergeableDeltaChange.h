
@interface CKDPRecordRetrieveChangesResponseMergeableDeltaChange : PBCodable <NSCopying> {
    NSMutableArray * _deltas;
    CKDPRecordFieldIdentifier * _fieldIdentifier;
    CKDPMergeableValueIdentifier * _identifier;
    CKDPRecordIdentifier * _recordIdentifier;
    CKDPRecordType * _recordType;
}

@property (nonatomic, retain) NSMutableArray *deltas;
@property (nonatomic, retain) CKDPRecordFieldIdentifier *fieldIdentifier;
@property (nonatomic, readonly) bool hasFieldIdentifier;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasRecordIdentifier;
@property (nonatomic, readonly) bool hasRecordType;
@property (nonatomic, retain) CKDPMergeableValueIdentifier *identifier;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;
@property (nonatomic, retain) CKDPRecordType *recordType;

+ (Class)deltasType;

- (void).cxx_destruct;
- (void)addDeltas:(id)arg1;
- (void)clearDeltas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)deltas;
- (id)deltasAtIndex:(unsigned long long)arg1;
- (unsigned long long)deltasCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldIdentifier;
- (bool)hasFieldIdentifier;
- (bool)hasIdentifier;
- (bool)hasRecordIdentifier;
- (bool)hasRecordType;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (id)recordType;
- (void)setDeltas:(id)arg1;
- (void)setFieldIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)setRecordType:(id)arg1;
- (void)writeTo:(id)arg1;

@end

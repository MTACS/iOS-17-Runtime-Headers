
@interface CKDPRealTimeMessageAssociatedMergeableDeltas : PBCodable <NSCopying> {
    CKDPRecordFieldIdentifier * _fieldIdentifier;
    CKDPMergeableValueIdentifier * _identifier;
    NSMutableArray * _mergeableDeltas;
    CKDPRecordIdentifier * _recordIdentifier;
}

@property (nonatomic, retain) CKDPRecordFieldIdentifier *fieldIdentifier;
@property (nonatomic, readonly) bool hasFieldIdentifier;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, readonly) bool hasRecordIdentifier;
@property (nonatomic, retain) CKDPMergeableValueIdentifier *identifier;
@property (nonatomic, retain) NSMutableArray *mergeableDeltas;
@property (nonatomic, retain) CKDPRecordIdentifier *recordIdentifier;

+ (Class)mergeableDeltasType;

- (void).cxx_destruct;
- (void)addMergeableDeltas:(id)arg1;
- (void)clearMergeableDeltas;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fieldIdentifier;
- (bool)hasFieldIdentifier;
- (bool)hasIdentifier;
- (bool)hasRecordIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)mergeableDeltas;
- (id)mergeableDeltasAtIndex:(unsigned long long)arg1;
- (unsigned long long)mergeableDeltasCount;
- (bool)readFrom:(id)arg1;
- (id)recordIdentifier;
- (void)setFieldIdentifier:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setMergeableDeltas:(id)arg1;
- (void)setRecordIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

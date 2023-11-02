
@interface OTEscrowMoveRequestContext : PBCodable <NSCopying> {
    NSString * _currentFederation;
    NSString * _escrowRecordLabel;
    NSString * _intendedFederation;
}

@property (nonatomic, retain) NSString *currentFederation;
@property (nonatomic, retain) NSString *escrowRecordLabel;
@property (nonatomic, readonly) bool hasCurrentFederation;
@property (nonatomic, readonly) bool hasEscrowRecordLabel;
@property (nonatomic, readonly) bool hasIntendedFederation;
@property (nonatomic, retain) NSString *intendedFederation;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentFederation;
- (id)description;
- (id)dictionaryRepresentation;
- (id)escrowRecordLabel;
- (bool)hasCurrentFederation;
- (bool)hasEscrowRecordLabel;
- (bool)hasIntendedFederation;
- (unsigned long long)hash;
- (id)intendedFederation;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCurrentFederation:(id)arg1;
- (void)setEscrowRecordLabel:(id)arg1;
- (void)setIntendedFederation:(id)arg1;
- (void)writeTo:(id)arg1;

@end

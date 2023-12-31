
@interface CKDPUniqueFieldFailure : PBCodable <NSCopying> {
    CKDPIdentifier * _identifierForConstraintFailure;
}

@property (nonatomic, readonly) bool hasIdentifierForConstraintFailure;
@property (nonatomic, retain) CKDPIdentifier *identifierForConstraintFailure;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIdentifierForConstraintFailure;
- (unsigned long long)hash;
- (id)identifierForConstraintFailure;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIdentifierForConstraintFailure:(id)arg1;
- (void)writeTo:(id)arg1;

@end

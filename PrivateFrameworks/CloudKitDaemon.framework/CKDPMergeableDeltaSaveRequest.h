
@interface CKDPMergeableDeltaSaveRequest : PBRequest <NSCopying> {
    CKDPMergeableDelta * _delta;
    CKDPMergeableValueIdentifier * _identifier;
}

@property (nonatomic, retain) CKDPMergeableDelta *delta;
@property (nonatomic, readonly) bool hasDelta;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, retain) CKDPMergeableValueIdentifier *identifier;

+ (id)options;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)delta;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDelta;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setDelta:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

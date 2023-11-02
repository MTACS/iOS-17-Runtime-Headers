
@interface CKDPMergeableDeltaRetrieveRequest : PBRequest <NSCopying> {
    NSData * _continuation;
    CKDPMergeableValueIdentifier * _identifier;
}

@property (nonatomic, retain) NSData *continuation;
@property (nonatomic, readonly) bool hasContinuation;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, retain) CKDPMergeableValueIdentifier *identifier;

+ (id)options;

- (void).cxx_destruct;
- (id)continuation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasContinuation;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestTypeCode;
- (Class)responseClass;
- (void)setContinuation:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

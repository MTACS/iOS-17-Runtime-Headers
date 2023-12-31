
@interface PBBProtoGizmoActivationFailed : PBCodable <NSCopying> {
    NSString * _failureDescription;
}

@property (nonatomic, retain) NSString *failureDescription;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)failureDescription;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setFailureDescription:(id)arg1;
- (void)writeTo:(id)arg1;

@end

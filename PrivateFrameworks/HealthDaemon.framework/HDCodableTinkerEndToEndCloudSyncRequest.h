
@interface HDCodableTinkerEndToEndCloudSyncRequest : PBRequest <NSCopying> {
    NSString * _requestIdentifier;
}

@property (nonatomic, readonly) bool hasRequestIdentifier;
@property (nonatomic, retain) NSString *requestIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasRequestIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)requestIdentifier;
- (void)setRequestIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end

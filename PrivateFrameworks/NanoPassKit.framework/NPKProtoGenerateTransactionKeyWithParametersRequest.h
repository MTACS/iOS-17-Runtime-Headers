
@interface NPKProtoGenerateTransactionKeyWithParametersRequest : PBRequest <NSCopying> {
    NSData * _parameters;
}

@property (nonatomic, readonly) bool hasParameters;
@property (nonatomic, retain) NSData *parameters;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasParameters;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)parameters;
- (bool)readFrom:(id)arg1;
- (void)setParameters:(id)arg1;
- (void)writeTo:(id)arg1;

@end

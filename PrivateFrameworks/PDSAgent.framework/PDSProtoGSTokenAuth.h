
@interface PDSProtoGSTokenAuth : PBCodable <NSCopying> {
    NSString * _gsAuthToken;
}

@property (nonatomic, retain) NSString *gsAuthToken;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)gsAuthToken;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setGsAuthToken:(id)arg1;
- (void)writeTo:(id)arg1;

@end

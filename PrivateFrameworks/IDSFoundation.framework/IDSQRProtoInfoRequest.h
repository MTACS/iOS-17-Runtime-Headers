
@interface IDSQRProtoInfoRequest : PBRequest <NSCopying> {
    NSData * _accessToken;
    unsigned int  _infoFlags;
}

@property (nonatomic, retain) NSData *accessToken;
@property (nonatomic, readonly) bool hasAccessToken;
@property (nonatomic) unsigned int infoFlags;

- (void).cxx_destruct;
- (id)accessToken;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAccessToken;
- (unsigned long long)hash;
- (unsigned int)infoFlags;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAccessToken:(id)arg1;
- (void)setInfoFlags:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end

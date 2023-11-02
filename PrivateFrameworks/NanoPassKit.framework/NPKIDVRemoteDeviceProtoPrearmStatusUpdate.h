
@interface NPKIDVRemoteDeviceProtoPrearmStatusUpdate : PBCodable <NSCopying> {
    int  _prearmStatus;
}

@property (nonatomic) int prearmStatus;

- (int)StringAsPrearmStatus:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)prearmStatus;
- (id)prearmStatusAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setPrearmStatus:(int)arg1;
- (void)writeTo:(id)arg1;

@end

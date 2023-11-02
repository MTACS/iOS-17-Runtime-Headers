
@interface NSSUpdatePowerStatusMsgType : PBCodable <NSCopying> {
    unsigned long long  _notificationType;
}

@property (nonatomic) unsigned long long notificationType;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)notificationType;
- (bool)readFrom:(id)arg1;
- (void)setNotificationType:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

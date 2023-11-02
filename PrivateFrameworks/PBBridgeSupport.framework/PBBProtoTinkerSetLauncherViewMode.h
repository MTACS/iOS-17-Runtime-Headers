
@interface PBBProtoTinkerSetLauncherViewMode : PBCodable <NSCopying> {
    unsigned int  _launcherViewMode;
}

@property (nonatomic) unsigned int launcherViewMode;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)launcherViewMode;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLauncherViewMode:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end

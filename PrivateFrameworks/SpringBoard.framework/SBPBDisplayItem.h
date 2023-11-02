
@interface SBPBDisplayItem : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    NSString * _sceneIdentifier;
    int  _type;
    NSString * _webClipIdentifier;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

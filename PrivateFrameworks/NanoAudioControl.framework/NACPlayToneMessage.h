
@interface NACPlayToneMessage : PBCodable <NSCopying> {
    NSString * _toneIdentifier;
}

@property (nonatomic, readonly) bool hasToneIdentifier;
@property (nonatomic, retain) NSString *toneIdentifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasToneIdentifier;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setToneIdentifier:(id)arg1;
- (id)toneIdentifier;
- (void)writeTo:(id)arg1;

@end

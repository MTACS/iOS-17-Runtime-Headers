
@interface PBBProtoSetLanguage : PBCodable <NSCopying> {
    NSString * _language;
}

@property (nonatomic, retain) NSString *language;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLanguage:(id)arg1;
- (void)writeTo:(id)arg1;

@end

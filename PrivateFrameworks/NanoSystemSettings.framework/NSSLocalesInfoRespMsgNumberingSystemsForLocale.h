
@interface NSSLocalesInfoRespMsgNumberingSystemsForLocale : PBCodable <NSCopying> {
    NSString * _localeIdentifier;
    NSMutableArray * _numberingSystems;
}

@property (nonatomic, retain) NSString *localeIdentifier;
@property (nonatomic, retain) NSMutableArray *numberingSystems;

+ (Class)numberingSystemType;

- (void).cxx_destruct;
- (void)addNumberingSystem:(id)arg1;
- (void)clearNumberingSystems;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)localeIdentifier;
- (void)mergeFrom:(id)arg1;
- (id)numberingSystemAtIndex:(unsigned long long)arg1;
- (id)numberingSystems;
- (unsigned long long)numberingSystemsCount;
- (bool)readFrom:(id)arg1;
- (void)setLocaleIdentifier:(id)arg1;
- (void)setNumberingSystems:(id)arg1;
- (void)writeTo:(id)arg1;

@end

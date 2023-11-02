
@interface HMImmutableSettingsProtoAvailableLanguageListEvent : PBCodable <NSCopying> {
    NSMutableArray * _languages;
}

@property (nonatomic, retain) NSMutableArray *languages;

+ (Class)languagesType;

- (void).cxx_destruct;
- (void)addLanguages:(id)arg1;
- (void)clearLanguages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)languages;
- (id)languagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)languagesCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLanguages:(id)arg1;
- (void)writeTo:(id)arg1;

@end

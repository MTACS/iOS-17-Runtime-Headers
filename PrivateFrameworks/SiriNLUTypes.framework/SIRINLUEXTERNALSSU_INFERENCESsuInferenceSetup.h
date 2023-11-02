
@interface SIRINLUEXTERNALSSU_INFERENCESsuInferenceSetup : PBCodable <NSCopying> {
    NSString * _locale;
}

@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, retain) NSString *locale;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocale;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)writeTo:(id)arg1;

@end

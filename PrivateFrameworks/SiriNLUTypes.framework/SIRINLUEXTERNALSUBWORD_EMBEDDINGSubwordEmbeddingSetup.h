
@interface SIRINLUEXTERNALSUBWORD_EMBEDDINGSubwordEmbeddingSetup : PBCodable <NSCopying> {
    NSString * _embeddingVersion;
    NSString * _locale;
}

@property (nonatomic, retain) NSString *embeddingVersion;
@property (nonatomic, readonly) bool hasEmbeddingVersion;
@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic, retain) NSString *locale;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)embeddingVersion;
- (bool)hasEmbeddingVersion;
- (bool)hasLocale;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEmbeddingVersion:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)writeTo:(id)arg1;

@end

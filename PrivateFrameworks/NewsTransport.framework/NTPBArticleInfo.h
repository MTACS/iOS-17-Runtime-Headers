
@interface NTPBArticleInfo : PBCodable <NSCopying> {
    NSString * _articleId;
    NSString * _storeFrontId;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, readonly) bool hasStoreFrontId;
@property (nonatomic, retain) NSString *storeFrontId;

- (void).cxx_destruct;
- (id)articleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasStoreFrontId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setStoreFrontId:(id)arg1;
- (id)storeFrontId;
- (void)writeTo:(id)arg1;

@end

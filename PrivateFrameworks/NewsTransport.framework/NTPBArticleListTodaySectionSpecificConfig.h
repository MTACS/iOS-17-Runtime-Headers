
@interface NTPBArticleListTodaySectionSpecificConfig : PBCodable <NSCopying> {
    NSString * _articleListID;
}

@property (nonatomic, retain) NSString *articleListID;
@property (nonatomic, readonly) bool hasArticleListID;

- (id)articleListID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleListID;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleListID:(id)arg1;
- (void)writeTo:(id)arg1;

@end

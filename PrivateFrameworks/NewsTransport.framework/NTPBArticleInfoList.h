
@interface NTPBArticleInfoList : PBCodable <NSCopying> {
    NSMutableArray * _articleInfos;
    NSData * _urlHash;
}

@property (nonatomic, retain) NSMutableArray *articleInfos;
@property (nonatomic, retain) NSData *urlHash;

+ (Class)articleInfoType;

- (void).cxx_destruct;
- (void)addArticleInfo:(id)arg1;
- (id)articleInfoAtIndex:(unsigned long long)arg1;
- (id)articleInfos;
- (unsigned long long)articleInfosCount;
- (void)clearArticleInfos;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleInfos:(id)arg1;
- (void)setUrlHash:(id)arg1;
- (id)urlHash;
- (void)writeTo:(id)arg1;

@end


@interface NTPBArticleInfoListResponse : PBCodable <NSCopying> {
    NSMutableArray * _articleInfoLists;
    bool  _isValidBucketGroup;
}

@property (nonatomic, retain) NSMutableArray *articleInfoLists;
@property (nonatomic) bool isValidBucketGroup;

+ (Class)articleInfoListType;

- (void).cxx_destruct;
- (void)addArticleInfoList:(id)arg1;
- (id)articleInfoListAtIndex:(unsigned long long)arg1;
- (id)articleInfoLists;
- (unsigned long long)articleInfoListsCount;
- (void)clearArticleInfoLists;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isValidBucketGroup;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleInfoLists:(id)arg1;
- (void)setIsValidBucketGroup:(bool)arg1;
- (void)writeTo:(id)arg1;

@end

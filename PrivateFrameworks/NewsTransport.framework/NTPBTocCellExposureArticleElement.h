
@interface NTPBTocCellExposureArticleElement : PBCodable <NSCopying> {
    NSString * _articleId;
    int  _articleType;
    struct { 
        unsigned int publisherArticleVersionInt64 : 1; 
        unsigned int articleType : 1; 
    }  _has;
    long long  _publisherArticleVersionInt64;
    NSString * _sourceChannelId;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic) int articleType;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic) bool hasArticleType;
@property (nonatomic) bool hasPublisherArticleVersionInt64;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic) long long publisherArticleVersionInt64;
@property (nonatomic, retain) NSString *sourceChannelId;

- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (id)articleId;
- (int)articleType;
- (id)articleTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleId;
- (bool)hasArticleType;
- (bool)hasPublisherArticleVersionInt64;
- (bool)hasSourceChannelId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)publisherArticleVersionInt64;
- (bool)readFrom:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleType:(int)arg1;
- (void)setHasArticleType:(bool)arg1;
- (void)setHasPublisherArticleVersionInt64:(bool)arg1;
- (void)setPublisherArticleVersionInt64:(long long)arg1;
- (void)setSourceChannelId:(id)arg1;
- (id)sourceChannelId;
- (void)writeTo:(id)arg1;

@end

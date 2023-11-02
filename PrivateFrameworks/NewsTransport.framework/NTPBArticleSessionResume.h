
@interface NTPBArticleSessionResume : PBCodable <NSCopying> {
    NSString * _articleId;
    int  _articleType;
    NSData * _articleViewingSessionId;
    struct { 
        unsigned int publisherArticleVersion : 1; 
        unsigned int articleType : 1; 
    }  _has;
    long long  _publisherArticleVersion;
    NSString * _sourceChannelId;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic) int articleType;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic) bool hasArticleType;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic) bool hasPublisherArticleVersion;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic) long long publisherArticleVersion;
@property (nonatomic, retain) NSString *sourceChannelId;

- (void).cxx_destruct;
- (int)StringAsArticleType:(id)arg1;
- (id)articleId;
- (int)articleType;
- (id)articleTypeAsString:(int)arg1;
- (id)articleViewingSessionId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasArticleId;
- (bool)hasArticleType;
- (bool)hasArticleViewingSessionId;
- (bool)hasPublisherArticleVersion;
- (bool)hasSourceChannelId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (long long)publisherArticleVersion;
- (bool)readFrom:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setArticleType:(int)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setHasArticleType:(bool)arg1;
- (void)setHasPublisherArticleVersion:(bool)arg1;
- (void)setPublisherArticleVersion:(long long)arg1;
- (void)setSourceChannelId:(id)arg1;
- (id)sourceChannelId;
- (void)writeTo:(id)arg1;

@end

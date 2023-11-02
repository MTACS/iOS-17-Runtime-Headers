
@interface NTPBArticleFeedback : PBCodable <NSCopying> {
    NSString * _articleId;
    int  _feedback;
    struct { 
        unsigned int feedback : 1; 
    }  _has;
    NSString * _language;
    NSString * _sourceChannelId;
    NSString * _topicId;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic) int feedback;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic) bool hasFeedback;
@property (nonatomic, readonly) bool hasLanguage;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic, readonly) bool hasTopicId;
@property (nonatomic, retain) NSString *language;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *topicId;

- (void).cxx_destruct;
- (id)articleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedback;
- (bool)hasArticleId;
- (bool)hasFeedback;
- (bool)hasLanguage;
- (bool)hasSourceChannelId;
- (bool)hasTopicId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)language;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setFeedback:(int)arg1;
- (void)setHasFeedback:(bool)arg1;
- (void)setLanguage:(id)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setTopicId:(id)arg1;
- (id)sourceChannelId;
- (id)topicId;
- (void)writeTo:(id)arg1;

@end


@interface NTPBLinkTap : PBCodable <NSCopying> {
    NSString * _articleId;
    NSData * _articleViewingSessionId;
    int  _groupType;
    struct { 
        unsigned int groupType : 1; 
        unsigned int linkType : 1; 
        unsigned int tapLocationType : 1; 
        unsigned int webEmbedLocation : 1; 
    }  _has;
    int  _linkType;
    NSString * _referencedArticleId;
    int  _tapLocationType;
    NSString * _tappedLinkUrl;
    NSString * _webEmbedId;
    int  _webEmbedLocation;
}

@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, retain) NSData *articleViewingSessionId;
@property (nonatomic) int groupType;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasArticleViewingSessionId;
@property (nonatomic) bool hasGroupType;
@property (nonatomic) bool hasLinkType;
@property (nonatomic, readonly) bool hasReferencedArticleId;
@property (nonatomic) bool hasTapLocationType;
@property (nonatomic, readonly) bool hasTappedLinkUrl;
@property (nonatomic, readonly) bool hasWebEmbedId;
@property (nonatomic) bool hasWebEmbedLocation;
@property (nonatomic) int linkType;
@property (nonatomic, retain) NSString *referencedArticleId;
@property (nonatomic) int tapLocationType;
@property (nonatomic, retain) NSString *tappedLinkUrl;
@property (nonatomic, retain) NSString *webEmbedId;
@property (nonatomic) int webEmbedLocation;

- (void).cxx_destruct;
- (int)StringAsGroupType:(id)arg1;
- (int)StringAsWebEmbedLocation:(id)arg1;
- (id)articleId;
- (id)articleViewingSessionId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)groupType;
- (id)groupTypeAsString:(int)arg1;
- (bool)hasArticleId;
- (bool)hasArticleViewingSessionId;
- (bool)hasGroupType;
- (bool)hasLinkType;
- (bool)hasReferencedArticleId;
- (bool)hasTapLocationType;
- (bool)hasTappedLinkUrl;
- (bool)hasWebEmbedId;
- (bool)hasWebEmbedLocation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (int)linkType;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)referencedArticleId;
- (void)setArticleId:(id)arg1;
- (void)setArticleViewingSessionId:(id)arg1;
- (void)setGroupType:(int)arg1;
- (void)setHasGroupType:(bool)arg1;
- (void)setHasLinkType:(bool)arg1;
- (void)setHasTapLocationType:(bool)arg1;
- (void)setHasWebEmbedLocation:(bool)arg1;
- (void)setLinkType:(int)arg1;
- (void)setReferencedArticleId:(id)arg1;
- (void)setTapLocationType:(int)arg1;
- (void)setTappedLinkUrl:(id)arg1;
- (void)setWebEmbedId:(id)arg1;
- (void)setWebEmbedLocation:(int)arg1;
- (int)tapLocationType;
- (id)tappedLinkUrl;
- (id)webEmbedId;
- (int)webEmbedLocation;
- (id)webEmbedLocationAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

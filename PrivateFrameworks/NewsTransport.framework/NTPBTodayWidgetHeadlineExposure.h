
@interface NTPBTodayWidgetHeadlineExposure : PBCodable <NSCopying> {
    NTPBAlternateHeadline * _alternateHeadline;
    NSString * _articleId;
    struct { 
        unsigned int widgetArticleCount : 1; 
        unsigned int widgetArticleCountInSection : 1; 
        unsigned int widgetArticleRank : 1; 
        unsigned int widgetArticleRankInSection : 1; 
        unsigned int widgetContentType : 1; 
        unsigned int widgetExposureStackLocation : 1; 
        unsigned int widgetSectionDisplayRank : 1; 
        unsigned int widgetType : 1; 
    }  _has;
    NSString * _sourceChannelId;
    NSString * _storyType;
    NSString * _webEmbedId;
    int  _widgetArticleCount;
    int  _widgetArticleCountInSection;
    int  _widgetArticleRank;
    int  _widgetArticleRankInSection;
    int  _widgetContentType;
    int  _widgetExposureStackLocation;
    int  _widgetSectionDisplayRank;
    NSString * _widgetSectionId;
    NSString * _widgetSectionSubid;
    int  _widgetType;
}

@property (nonatomic, retain) NTPBAlternateHeadline *alternateHeadline;
@property (nonatomic, retain) NSString *articleId;
@property (nonatomic, readonly) bool hasAlternateHeadline;
@property (nonatomic, readonly) bool hasArticleId;
@property (nonatomic, readonly) bool hasSourceChannelId;
@property (nonatomic, readonly) bool hasStoryType;
@property (nonatomic, readonly) bool hasWebEmbedId;
@property (nonatomic) bool hasWidgetArticleCount;
@property (nonatomic) bool hasWidgetArticleCountInSection;
@property (nonatomic) bool hasWidgetArticleRank;
@property (nonatomic) bool hasWidgetArticleRankInSection;
@property (nonatomic) bool hasWidgetContentType;
@property (nonatomic) bool hasWidgetExposureStackLocation;
@property (nonatomic) bool hasWidgetSectionDisplayRank;
@property (nonatomic, readonly) bool hasWidgetSectionId;
@property (nonatomic, readonly) bool hasWidgetSectionSubid;
@property (nonatomic) bool hasWidgetType;
@property (nonatomic, retain) NSString *sourceChannelId;
@property (nonatomic, retain) NSString *storyType;
@property (nonatomic, retain) NSString *webEmbedId;
@property (nonatomic) int widgetArticleCount;
@property (nonatomic) int widgetArticleCountInSection;
@property (nonatomic) int widgetArticleRank;
@property (nonatomic) int widgetArticleRankInSection;
@property (nonatomic) int widgetContentType;
@property (nonatomic) int widgetExposureStackLocation;
@property (nonatomic) int widgetSectionDisplayRank;
@property (nonatomic, retain) NSString *widgetSectionId;
@property (nonatomic, retain) NSString *widgetSectionSubid;
@property (nonatomic) int widgetType;

- (void).cxx_destruct;
- (int)StringAsWidgetContentType:(id)arg1;
- (int)StringAsWidgetExposureStackLocation:(id)arg1;
- (int)StringAsWidgetType:(id)arg1;
- (id)alternateHeadline;
- (id)articleId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAlternateHeadline;
- (bool)hasArticleId;
- (bool)hasSourceChannelId;
- (bool)hasStoryType;
- (bool)hasWebEmbedId;
- (bool)hasWidgetArticleCount;
- (bool)hasWidgetArticleCountInSection;
- (bool)hasWidgetArticleRank;
- (bool)hasWidgetArticleRankInSection;
- (bool)hasWidgetContentType;
- (bool)hasWidgetExposureStackLocation;
- (bool)hasWidgetSectionDisplayRank;
- (bool)hasWidgetSectionId;
- (bool)hasWidgetSectionSubid;
- (bool)hasWidgetType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAlternateHeadline:(id)arg1;
- (void)setArticleId:(id)arg1;
- (void)setHasWidgetArticleCount:(bool)arg1;
- (void)setHasWidgetArticleCountInSection:(bool)arg1;
- (void)setHasWidgetArticleRank:(bool)arg1;
- (void)setHasWidgetArticleRankInSection:(bool)arg1;
- (void)setHasWidgetContentType:(bool)arg1;
- (void)setHasWidgetExposureStackLocation:(bool)arg1;
- (void)setHasWidgetSectionDisplayRank:(bool)arg1;
- (void)setHasWidgetType:(bool)arg1;
- (void)setSourceChannelId:(id)arg1;
- (void)setStoryType:(id)arg1;
- (void)setWebEmbedId:(id)arg1;
- (void)setWidgetArticleCount:(int)arg1;
- (void)setWidgetArticleCountInSection:(int)arg1;
- (void)setWidgetArticleRank:(int)arg1;
- (void)setWidgetArticleRankInSection:(int)arg1;
- (void)setWidgetContentType:(int)arg1;
- (void)setWidgetExposureStackLocation:(int)arg1;
- (void)setWidgetSectionDisplayRank:(int)arg1;
- (void)setWidgetSectionId:(id)arg1;
- (void)setWidgetSectionSubid:(id)arg1;
- (void)setWidgetType:(int)arg1;
- (id)sourceChannelId;
- (id)storyType;
- (id)webEmbedId;
- (int)widgetArticleCount;
- (int)widgetArticleCountInSection;
- (int)widgetArticleRank;
- (int)widgetArticleRankInSection;
- (int)widgetContentType;
- (id)widgetContentTypeAsString:(int)arg1;
- (int)widgetExposureStackLocation;
- (id)widgetExposureStackLocationAsString:(int)arg1;
- (int)widgetSectionDisplayRank;
- (id)widgetSectionId;
- (id)widgetSectionSubid;
- (int)widgetType;
- (id)widgetTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end


@interface NTPBTodaySectionConfigArticle : PBCodable <NSCopying, NTHeadlineMetadata> {
    NSString * _actionURLString;
    NSString * _articleID;
    NSString * _displayDateString;
    NTPBTodaySectionConfigArticle * _paidArticle;
    NSString * _storyType;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *actionURLString;
@property (nonatomic, retain) NSString *actionURLString;
@property (nonatomic, retain) NSString *articleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, retain) NSString *displayDateString;
@property (nonatomic, readonly) FCHeadlineThumbnailMetadata *formatThumbnail;
@property (nonatomic, readonly) bool hasActionURLString;
@property (nonatomic, readonly) bool hasArticleID;
@property (nonatomic, readonly) bool hasDisplayDateString;
@property (nonatomic, readonly) bool hasPaidArticle;
@property (nonatomic, readonly) bool hasStoryType;
@property (nonatomic, readonly) bool hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NTPBTodaySectionConfigArticle *paidArticle;
@property (nonatomic, readonly) NSString *shortExcerpt;
@property (nonatomic, readonly) NSString *storyType;
@property (nonatomic, retain) NSString *storyType;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, retain) NSString *title;

// Image: /System/Library/PrivateFrameworks/NewsTransport.framework/NewsTransport

- (id)actionURLString;
- (id)articleID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayDateString;
- (bool)hasActionURLString;
- (bool)hasArticleID;
- (bool)hasDisplayDateString;
- (bool)hasPaidArticle;
- (bool)hasStoryType;
- (bool)hasTitle;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paidArticle;
- (bool)readFrom:(id)arg1;
- (void)setActionURLString:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setDisplayDateString:(id)arg1;
- (void)setPaidArticle:(id)arg1;
- (void)setStoryType:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)storyType;
- (id)title;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday

- (id)displayDate;

@end

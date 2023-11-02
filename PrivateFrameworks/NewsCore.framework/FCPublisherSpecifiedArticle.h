
@interface FCPublisherSpecifiedArticle : NSObject <FCHeadlineMetadata> {
    NSString * _articleID;
    NSString * _title;
}

@property (nonatomic, copy) NSString *articleID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDate *displayDate;
@property (nonatomic, readonly) FCHeadlineThumbnailMetadata *formatThumbnail;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *shortExcerpt;
@property (nonatomic, readonly) NSString *storyType;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (id)articleID;
- (id)displayDate;
- (id)initWithDictionary:(id)arg1;
- (void)setArticleID:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)storyType;
- (id)title;

@end


@interface EDAMRelatedContent : FATObject {
    NSNumber * _accessType;
    NSArray * _authors;
    NSString * _clipUrl;
    EDAMContact * _contact;
    NSString * _contentId;
    NSNumber * _contentType;
    NSNumber * _date;
    NSString * _sourceFaviconUrl;
    NSString * _sourceId;
    NSString * _sourceName;
    NSString * _sourceUrl;
    NSString * _teaser;
    NSArray * _thumbnails;
    NSString * _title;
    NSString * _url;
    NSString * _visibleUrl;
}

@property (nonatomic, retain) NSNumber *accessType;
@property (nonatomic, retain) NSArray *authors;
@property (nonatomic, retain) NSString *clipUrl;
@property (nonatomic, retain) EDAMContact *contact;
@property (nonatomic, retain) NSString *contentId;
@property (nonatomic, retain) NSNumber *contentType;
@property (nonatomic, retain) NSNumber *date;
@property (nonatomic, retain) NSString *sourceFaviconUrl;
@property (nonatomic, retain) NSString *sourceId;
@property (nonatomic, retain) NSString *sourceName;
@property (nonatomic, retain) NSString *sourceUrl;
@property (nonatomic, retain) NSString *teaser;
@property (nonatomic, retain) NSArray *thumbnails;
@property (nonatomic, retain) NSString *title;
@property (nonatomic, retain) NSString *url;
@property (nonatomic, retain) NSString *visibleUrl;

+ (id)structFields;
+ (id)structName;

- (void).cxx_destruct;
- (id)accessType;
- (id)authors;
- (id)clipUrl;
- (id)contact;
- (id)contentId;
- (id)contentType;
- (id)date;
- (void)setAccessType:(id)arg1;
- (void)setAuthors:(id)arg1;
- (void)setClipUrl:(id)arg1;
- (void)setContact:(id)arg1;
- (void)setContentId:(id)arg1;
- (void)setContentType:(id)arg1;
- (void)setDate:(id)arg1;
- (void)setSourceFaviconUrl:(id)arg1;
- (void)setSourceId:(id)arg1;
- (void)setSourceName:(id)arg1;
- (void)setSourceUrl:(id)arg1;
- (void)setTeaser:(id)arg1;
- (void)setThumbnails:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUrl:(id)arg1;
- (void)setVisibleUrl:(id)arg1;
- (id)sourceFaviconUrl;
- (id)sourceId;
- (id)sourceName;
- (id)sourceUrl;
- (id)teaser;
- (id)thumbnails;
- (id)title;
- (id)url;
- (id)visibleUrl;

@end

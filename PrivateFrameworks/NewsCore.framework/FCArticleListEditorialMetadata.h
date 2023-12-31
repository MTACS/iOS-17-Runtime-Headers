
@interface FCArticleListEditorialMetadata : NSObject {
    NSDictionary * _articleMetadata;
    NSDate * _publishDate;
}

@property (nonatomic, retain) NSDictionary *articleMetadata;
@property (nonatomic, retain) NSDate *publishDate;

- (void).cxx_destruct;
- (id)articleMetadata;
- (id)initWithDictionary:(id)arg1;
- (id)publishDate;
- (void)setArticleMetadata:(id)arg1;
- (void)setPublishDate:(id)arg1;

@end

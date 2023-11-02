
@interface SSNewsResultBuilder : SSResultBuilder {
    NSString * _newsSource;
    NSDate * _publishedDate;
    NSString * _title;
}

@property (nonatomic, retain) NSString *newsSource;
@property (nonatomic, retain) NSDate *publishedDate;
@property (nonatomic, retain) NSString *title;

+ (id)bundleId;
+ (bool)isCoreSpotlightResult;
+ (id)newsFootnoteWithNewsSource:(id)arg1 publishedDate:(id)arg2;

- (void).cxx_destruct;
- (id)buildDescriptions;
- (id)buildInlineCardSection;
- (id)initWithResult:(id)arg1;
- (id)newsSource;
- (id)publishedDate;
- (void)setNewsSource:(id)arg1;
- (void)setPublishedDate:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

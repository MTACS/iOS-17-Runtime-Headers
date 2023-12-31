
@protocol WFWebPageProtocol

@required

- (NSString *)URLString;
- (bool)hasFrameset;
- (bool)hasShortRefresh;
- (NSArray *)images;
- (NSArray *)links;
- (NSString *)metaTagDescription;
- (NSString *)metaTagKeywords;
- (NSDictionary *)metaTagsLabeled;
- (NSArray *)metaTagsUnlabeled;
- (NSString *)pageContent;
- (NSString *)pageTitle;
- (NSArray *)scriptBlocks;

@end

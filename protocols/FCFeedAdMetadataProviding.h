
@protocol FCFeedAdMetadataProviding <NSObject>

@required

- (NSArray *)iAdCategories;
- (long long)iAdContentProvider;
- (NSString *)iAdFeedID;
- (NSString *)iAdIdentifier;
- (NSArray *)iAdKeywords;
- (NSString *)iAdPrimaryAudience;
- (NSString *)iAdSectionID;

@end

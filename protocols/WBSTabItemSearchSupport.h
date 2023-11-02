
@protocol WBSTabItemSearchSupport <NSObject>

@required

- (NSString *)URLString;
- (NSArray *)URLStringComponents;
- (NSString *)URLStringForLastSearch;
- (NSString *)lastSearchTerm;
- (bool)matchedLastSearch;
- (void)setLastSearchTerm:(NSString *)arg1;
- (void)setMatchedLastSearch:(bool)arg1;
- (void)setTitleForLastSearch:(NSString *)arg1;
- (void)setTitleWords:(NSArray *)arg1;
- (void)setURLStringComponents:(NSArray *)arg1;
- (void)setURLStringForLastSearch:(NSString *)arg1;
- (NSString *)title;
- (NSString *)titleForLastSearch;
- (NSArray *)titleWords;

@end

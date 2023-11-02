
@protocol PSSearchModelDelegate <NSObject>

@optional

- (void)searchModel:(PSSearchModel *)arg1 updatedWithNewResults:(PSSearchResults *)arg2 forQuery:(NSString *)arg3;
- (void)searchModelDidFinishIndexing:(PSSearchModel *)arg1;
- (void)searchModelDidFinishQuery:(PSSearchModel *)arg1;
- (void)searchModelWillBeginIndexing:(PSSearchModel *)arg1;

@end

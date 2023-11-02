
@protocol MDMAppItemsDataSource <NSObject>

@required

- (NSDictionary *)appItems;
- (NSSet *)appsRequested;
- (void)fetchAppItems;
- (NSSet *)itemsRequested;
- (void)setAppItems:(NSDictionary *)arg1;
- (void)setAppsRequested:(NSSet *)arg1;
- (void)setItemsRequested:(NSSet *)arg1;
- (void)setShouldReturnManagedAppsOnly:(bool)arg1;
- (bool)shouldReturnManagedAppsOnly;

@end

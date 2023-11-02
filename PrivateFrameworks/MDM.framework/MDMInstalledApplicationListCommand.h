
@interface MDMInstalledApplicationListCommand : NSObject {
    NSDictionary * _appItems;
    NSSet * _appsRequested;
    <MDMAppItemsDataSource> * _dataSource;
    bool  _isUserEnrollment;
    NSSet * _itemsRequested;
    NSDictionary * _request;
    NSDictionary * _response;
    bool  _shouldReturnManagedAppsOnly;
}

@property (nonatomic, copy) NSDictionary *appItems;
@property (nonatomic, copy) NSSet *appsRequested;
@property (nonatomic, retain) <MDMAppItemsDataSource> *dataSource;
@property (nonatomic) bool isUserEnrollment;
@property (nonatomic, copy) NSSet *itemsRequested;
@property (nonatomic, copy) NSDictionary *request;
@property (nonatomic, copy) NSDictionary *response;
@property (nonatomic) bool shouldReturnManagedAppsOnly;

+ (id)allItems;
+ (id)itemsThatMustAlwaysBeReturned;

- (void).cxx_destruct;
- (void)_processArguments;
- (void)_processIdentifiersArgument;
- (void)_processItemsArgument;
- (void)_processManagedAppsOnlyArgument;
- (void)_reset;
- (void)_validateRequestDictionaryIsPresentAndADictionary;
- (id)appItems;
- (id)appsRequested;
- (id)dataSource;
- (void)fetchAppProperties;
- (bool)isUserEnrollment;
- (id)itemsRequested;
- (id)request;
- (id)response;
- (id)responseForRequest:(id)arg1;
- (void)setAppItems:(id)arg1;
- (void)setAppsRequested:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setIsUserEnrollment:(bool)arg1;
- (void)setItemsRequested:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setShouldReturnManagedAppsOnly:(bool)arg1;
- (bool)shouldReturnManagedAppsOnly;

@end

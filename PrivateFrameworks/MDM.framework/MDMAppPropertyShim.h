
@interface MDMAppPropertyShim : NSObject <MDMAppItemsDataSource> {
    NSDictionary * _appItems;
    NSSet * _appsRequested;
    DMFConnection * _deviceManagementUserConnection;
    NSSet * _itemsRequested;
    NSArray * _keysForRequest;
    DMFFetchAppsRequest * _request;
    DMFFetchAppsResultObject * _response;
    bool  _shouldReturnManagedAppsOnly;
}

@property (nonatomic, copy) NSDictionary *appItems;
@property (nonatomic, copy) NSSet *appsRequested;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) DMFConnection *deviceManagementUserConnection;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSSet *itemsRequested;
@property (nonatomic, copy) NSArray *keysForRequest;
@property (nonatomic, retain) DMFFetchAppsRequest *request;
@property (nonatomic, retain) DMFFetchAppsResultObject *response;
@property (nonatomic) bool shouldReturnManagedAppsOnly;
@property (readonly) Class superclass;

+ (id)_dmdKeysToRequestToGetItems:(id)arg1;
+ (id)_itemKeyToDMDKeyMappingTable;

- (void).cxx_destruct;
- (id)_appDictionaryFromApp:(id)arg1;
- (void)_createAppItems;
- (void)_createKeysForRequest;
- (void)_createRequest;
- (void)_executeRequest;
- (id)appItems;
- (id)appsRequested;
- (id)deviceManagementUserConnection;
- (void)fetchAppItems;
- (id)itemsRequested;
- (id)keysForRequest;
- (id)request;
- (id)response;
- (void)setAppItems:(id)arg1;
- (void)setAppsRequested:(id)arg1;
- (void)setDeviceManagementUserConnection:(id)arg1;
- (void)setItemsRequested:(id)arg1;
- (void)setKeysForRequest:(id)arg1;
- (void)setRequest:(id)arg1;
- (void)setResponse:(id)arg1;
- (void)setShouldReturnManagedAppsOnly:(bool)arg1;
- (bool)shouldReturnManagedAppsOnly;

@end

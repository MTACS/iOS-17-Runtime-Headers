
@interface MTEnvironmentStoreDelegate : MTEnvironmentDeviceDelegate <MTEnvironmentDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_activeItunesAccount;
- (id)_connectionType;
- (id)connectionType;
- (id)cookies;
- (id)dsId;
- (id)storeFrontHeader;
- (id)userAgent;

@end

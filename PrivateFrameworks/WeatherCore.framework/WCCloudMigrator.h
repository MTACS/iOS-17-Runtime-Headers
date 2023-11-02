
@interface WCCloudMigrator : NSObject {
    WCDeviceLookup * _deviceLookup;
}

@property (nonatomic, readonly) WCDeviceLookup *deviceLookup;

- (void).cxx_destruct;
- (id)deviceLookup;
- (void)eraseStoreIfNeeded:(id)arg1;
- (id)init;
- (void)migrateStore:(id)arg1 toStore:(id)arg2 completionBlock:(id /* block */)arg3;
- (bool)storeRequiresMigration:(id)arg1;

@end

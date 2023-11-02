
@interface STStorageDataInterface : NSObject {
    STStorageAppsMonitor * _appsMonitor;
}

@property (retain) STStorageAppsMonitor *appsMonitor;

+ (id)storageInfoDict_Remote;

- (void).cxx_destruct;
- (id)appSizesDict;
- (id)apps;
- (id)appsMonitor;
- (id)appsOrderedByName;
- (id)appsOrderedBySize;
- (id)categorySizesDict;
- (id)init;
- (void)setAppsMonitor:(id)arg1;
- (id)storageInfoDict;

@end

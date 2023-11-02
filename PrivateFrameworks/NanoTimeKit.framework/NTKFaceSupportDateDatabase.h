
@interface NTKFaceSupportDateDatabase : NSObject {
    NSString * _filePath;
    NSObject<OS_dispatch_queue> * _fileQueue;
    NSMutableDictionary * _lookup;
}

@property (nonatomic, readonly, copy) NSString *filePath;

- (void).cxx_destruct;
- (void)_queue_loadLookup;
- (id)_queue_save;
- (void)deleteDateForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;
- (id)filePath;
- (id)initWithFileAtPath:(id)arg1;
- (void)recordDate:(id)arg1 bundleIdentifier:(id)arg2 completion:(id /* block */)arg3;
- (void)retreiveDateForBundleIdentifier:(id)arg1 completion:(id /* block */)arg2;

@end


@interface PXFileBackedAssetsDataSourceManager : PXAssetsDataSourceManager {
    NSMutableDictionary * _fileURLsBySection;
}

@property (nonatomic, readonly) NSDictionary *fileURLsBySection;

+ (id)emptyFileBackedDataSourceManager;
+ (id)fileBackedDataSourceManagerWithDirectory:(id)arg1;

- (void).cxx_destruct;
- (void)_createDataSource;
- (id)fileURLsBySection;
- (id)initWithFileURLsBySection:(id)arg1;
- (void)insertFileURL:(id)arg1 atIndex:(long long)arg2 inSection:(long long)arg3;
- (void)removeFileURLsAtIndexes:(id)arg1 inSection:(long long)arg2;

@end

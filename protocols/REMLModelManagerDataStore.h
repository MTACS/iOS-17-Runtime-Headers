
@protocol REMLModelManagerDataStore <NSObject>

@required

- (NSString *)dataStoreKey;
- (bool)modelManager:(REMLModelManager *)arg1 loadDataStoreFromURL:(NSURL *)arg2 error:(id*)arg3;
- (bool)modelManager:(REMLModelManager *)arg1 saveDataStoreToURL:(NSURL *)arg2 error:(id*)arg3;

@end

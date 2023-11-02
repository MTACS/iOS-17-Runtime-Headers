
@interface PBFDataStoreArchiver : NSObject {
    NSURL * _dataStoreURL;
    PRSDataStoreArchiveConfiguration * _options;
}

@property (nonatomic, readonly, copy) NSURL *dataStoreURL;
@property (nonatomic, copy) PRSDataStoreArchiveConfiguration *options;

+ (bool)archiveDataStoreAtURL:(id)arg1 toURL:(id)arg2 options:(id)arg3 error:(out id*)arg4;
+ (id)fileManager;

- (void).cxx_destruct;
- (bool)archiveToFileAtURL:(id)arg1 error:(out id*)arg2;
- (id)dataStoreURL;
- (id)initWithDataStoreAtURL:(id)arg1;
- (id)options;
- (void)setOptions:(id)arg1;

@end

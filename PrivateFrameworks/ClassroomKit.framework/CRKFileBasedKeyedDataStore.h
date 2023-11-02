
@interface CRKFileBasedKeyedDataStore : NSObject <CRKKeyedDataStoreProtocol> {
    NSDictionary * _directoryResourceValuesByKey;
    NSURL * _directoryURL;
    NSFileManager * _fileManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSDictionary *directoryResourceValuesByKey;
@property (nonatomic, retain) NSURL *directoryURL;
@property (nonatomic, retain) NSFileManager *fileManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)excludedFromiCloudBackupStoreWithDirectoryURL:(id)arg1;

- (void).cxx_destruct;
- (id)URLForKey:(id)arg1;
- (id)dataForKey:(id)arg1 error:(id*)arg2;
- (id)directoryResourceValuesByKey;
- (id)directoryURL;
- (id)fileManager;
- (id)init;
- (id)initWithDirectoryURL:(id)arg1;
- (id)initWithDirectoryURL:(id)arg1 directoryResourceValuesByKey:(id)arg2;
- (bool)isKeyValid:(id)arg1;
- (bool)removeAllDataWithError:(id*)arg1;
- (bool)removeDataForKey:(id)arg1 error:(id*)arg2;
- (bool)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setDirectoryURL:(id)arg1;
- (void)setFileManager:(id)arg1;
- (void)updateExistingDirectoryResourceValues;

@end

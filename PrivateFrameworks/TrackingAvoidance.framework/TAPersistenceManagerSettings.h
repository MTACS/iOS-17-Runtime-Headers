
@interface TAPersistenceManagerSettings : NSObject {
    NSURL * _persistenceDirectoryURL;
    NSString * _persistenceStoreFileName;
}

@property (nonatomic, retain) NSURL *persistenceDirectoryURL;
@property (nonatomic, retain) NSString *persistenceStoreFileName;

- (void).cxx_destruct;
- (id)_getStoreURL;
- (id)init;
- (id)initWithDirectoryURLOrDefault:(id)arg1 storeFileNameOrDefault:(id)arg2;
- (id)persistenceDirectoryURL;
- (id)persistenceStoreFileName;
- (void)setPersistenceDirectoryURL:(id)arg1;
- (void)setPersistenceStoreFileName:(id)arg1;

@end

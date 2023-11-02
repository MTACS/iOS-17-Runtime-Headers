
@interface AnalyticsStoreDescriptor : NSObject {
    unsigned long long  _analyticsStoreOptions;
    NSURL * _modelURL;
    NSDictionary * _remoteStoreOptions;
    NSPersistentStoreDescription * _storeDescription;
    NSURL * _storeURL;
    unsigned long long  _type;
}

@property (nonatomic) unsigned long long analyticsStoreOptions;
@property (nonatomic, retain) NSURL *modelURL;
@property (nonatomic, readonly) NSDictionary *remoteStoreOptions;
@property (nonatomic, readonly) NSPersistentStoreDescription *storeDescription;
@property (nonatomic, retain) NSURL *storeURL;
@property (nonatomic) unsigned long long type;

+ (id)applicationSupportDirectoryPath;
+ (id)defaultModelURL;
+ (id)defaultPersistentStoreURL;
+ (id)directStoreDescriptor;
+ (id)serverStoreDescriptor:(unsigned long long)arg1;

- (void).cxx_destruct;
- (unsigned long long)analyticsStoreOptions;
- (id)initWithType:(unsigned long long)arg1 storeURL:(id)arg2 modelURL:(id)arg3 options:(unsigned long long)arg4;
- (id)modelURL;
- (id)remoteStoreOptions;
- (void)setAnalyticsStoreOptions:(unsigned long long)arg1;
- (void)setModelURL:(id)arg1;
- (void)setStoreURL:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)storeDescription;
- (id)storeURL;
- (unsigned long long)type;

@end

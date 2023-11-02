
@interface TBCoreDataStoreDescriptor : NSObject {
    NSURL * _modelURL;
    NSPersistentStoreDescription * _storeDescription;
    NSDictionary * _storeOptions;
    NSURL * _storeURL;
    unsigned long long  _type;
}

@property (nonatomic, retain) NSURL *modelURL;
@property (nonatomic, readonly) NSPersistentStoreDescription *storeDescription;
@property (nonatomic, retain) NSDictionary *storeOptions;
@property (nonatomic, retain) NSURL *storeURL;
@property (nonatomic) unsigned long long type;

+ (id)clientStoreDescriptor;
+ (id)defaultModelURL;
+ (id)defaultPersistentStoreURLWithDirectory:(id)arg1;
+ (id)defaultStoresDirectoryURL;
+ (id)directStoreDescriptor;
+ (id)serverStoreDescriptor;
+ (id)tempStoreDescriptor;
+ (id)tempStoresDirectoryURL;

- (void).cxx_destruct;
- (id)initWithType:(unsigned long long)arg1 storeURL:(id)arg2 modelURL:(id)arg3;
- (id)modelURL;
- (void)setModelURL:(id)arg1;
- (void)setStoreOptions:(id)arg1;
- (void)setStoreURL:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)storeDescription;
- (id)storeOptions;
- (id)storeURL;
- (unsigned long long)type;

@end

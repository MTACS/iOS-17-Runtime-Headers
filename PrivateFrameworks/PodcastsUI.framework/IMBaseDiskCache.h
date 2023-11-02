
@interface IMBaseDiskCache : NSObject <IMCache> {
    NSString * _basePath;
}

@property (nonatomic, retain) NSString *basePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_allFiles;
- (id)basePath;
- (void)clearCache;
- (bool)hasItemForKey:(id)arg1;
- (id)init;
- (id)initWithBasePath:(id)arg1;
- (void)initialize;
- (bool)isEmpty;
- (id)pathForKey:(id)arg1;
- (void)removeItemForKey:(id)arg1;
- (void)removeItemsWithPrefx:(id)arg1;
- (void)setBasePath:(id)arg1;

@end

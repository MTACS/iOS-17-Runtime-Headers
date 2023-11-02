
@interface BMAppInstall : BMEventBase <BMStoreData> {
    NSString * _bundleID;
    NSString * _category;
    bool  _hasIsInstall;
    bool  _isInstall;
    NSArray * _subCategories;
    NSString * _title;
}

@property (nonatomic, readonly) NSString *bundleID;
@property (nonatomic, readonly) NSString *category;
@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool hasIsInstall;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isInstall;
@property (nonatomic, readonly) NSArray *subCategories;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

+ (id)columns;
+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;
+ (id)validKeyPaths;

- (void).cxx_destruct;
- (id)_subCategoriesJSONArray;
- (id)bundleID;
- (id)category;
- (unsigned int)dataVersion;
- (id)description;
- (bool)hasIsInstall;
- (id)initByReadFrom:(id)arg1;
- (id)initWithBundleID:(id)arg1 title:(id)arg2 category:(id)arg3 subCategories:(id)arg4 isInstall:(id)arg5;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isInstall;
- (id)jsonDictionary;
- (id)serialize;
- (void)setHasIsInstall:(bool)arg1;
- (id)subCategories;
- (id)title;
- (void)writeTo:(id)arg1;

@end

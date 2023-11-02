
@interface PKPlugInProxy : PKBundleProxy <PKPlugInProxy>

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSURL *bundleURL;
@property (nonatomic, readonly) NSString *bundleVersion;
@property (nonatomic, readonly) <PKBundleProxy> *containingBundle;
@property (nonatomic, readonly) NSURL *dataContainerURL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSDictionary *entitlements;
@property (nonatomic, readonly) <PKExtensionPointProxy> *extensionPoint;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *infoPlist;
@property (nonatomic, readonly) NSArray *launchPersonas;
@property (nonatomic, readonly, copy) NSString *localizedName;
@property (getter=isOnSystemPartition, nonatomic, readonly) bool onSystemPartition;
@property (nonatomic, readonly) NSString *originalIdentifier;
@property (nonatomic, readonly) NSNumber *platform;
@property (nonatomic, readonly) NSString *pluginIdentifier;
@property (nonatomic, readonly) NSDictionary *pluginKitDictionary;
@property (nonatomic, readonly) NSUUID *pluginUUID;
@property (nonatomic, readonly) NSDate *registrationDate;
@property (readonly) Class superclass;

- (id)containingBundle;
- (id)extensionPoint;
- (id)infoPlist;
- (id)initWithLSPlugInKitProxy:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithUUID:(id)arg1;
- (bool)isOnSystemPartition;
- (id)launchPersonas;
- (id)objectForInfoDictionaryKey:(id)arg1 ofClass:(Class)arg2 inScope:(unsigned long long)arg3;
- (id)originalIdentifier;
- (id)platform;
- (id)pluginIdentifier;
- (id)pluginKitDictionary;
- (id)pluginUUID;
- (id)registrationDate;

@end

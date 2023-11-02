
@interface MIContainer : NSObject {
    unsigned long long  _containerClass;
    NSURL * _containerURL;
    unsigned long long  _diskUsage;
    NSString * _identifier;
    bool  _isTransient;
    MIMCMContainer * _rawContainer;
    unsigned long long  _status;
}

@property (nonatomic) unsigned long long containerClass;
@property (nonatomic, retain) NSURL *containerURL;
@property (nonatomic) unsigned long long diskUsage;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, readonly) bool isNew;
@property (nonatomic) bool isTransient;
@property (nonatomic, readonly) NSString *personaUniqueString;
@property (nonatomic, readonly) MIMCMContainer *rawContainer;
@property (nonatomic) unsigned long long status;

+ (id)_allContainersForIdentifier:(id)arg1 persona:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
+ (id)_bundleContainerForIdentifier:(id)arg1 forPersona:(id)arg2 error:(id*)arg3;
+ (id)_containersForIdentifier:(id)arg1 groupContainerIdentifier:(id)arg2 ofContentClass:(unsigned long long)arg3 forPersona:(id)arg4 error:(id*)arg5;
+ (id)allContainersForAllPersonasForIdentifier:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
+ (id)allContainersForIdentifier:(id)arg1 persona:(id)arg2 options:(unsigned long long)arg3 error:(id*)arg4;
+ (id)containerWithIdentifier:(id)arg1 forPersona:(id)arg2 ofContentClass:(unsigned long long)arg3 createIfNeeded:(bool)arg4 created:(bool*)arg5 error:(id*)arg6;
+ (id)containersForIdentifier:(id)arg1 groupContainerIdentifier:(id)arg2 ofContentClass:(unsigned long long)arg3 forPersona:(id)arg4 createIfNeeded:(bool)arg5 error:(id*)arg6;
+ (id)containersWithClass:(unsigned long long)arg1 error:(id*)arg2;
+ (id)containersWithClass:(unsigned long long)arg1 personaUniqueString:(id)arg2 error:(id*)arg3;
+ (id)groupContainerURLsForBundleIdentifier:(id)arg1 forPersona:(id)arg2 error:(id*)arg3;
+ (bool)removeContainers:(id)arg1 waitForDeletion:(bool)arg2 error:(id*)arg3;
+ (id)tempContainerWithIdentifier:(id)arg1 forPersona:(id)arg2 ofContentClass:(unsigned long long)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (bool)_deriveContainerStatusWithError:(id*)arg1;
- (bool)_doInitWithContainer:(id)arg1 error:(id*)arg2;
- (bool)_replaceExistingContainer:(id)arg1 replacementReason:(unsigned long long)arg2 waitForDeletion:(bool)arg3 error:(id*)arg4;
- (bool)_setContainer:(id)arg1 error:(id*)arg2;
- (bool)captureStoreDataFromDirectory:(id)arg1 doCopy:(bool)arg2 failureIsFatal:(bool)arg3 withError:(id*)arg4;
- (unsigned long long)containerClass;
- (id)containerURL;
- (id)description;
- (unsigned long long)diskUsage;
- (id)identifier;
- (id)infoValueForKey:(id)arg1 error:(id*)arg2;
- (id)initWithContainer:(id)arg1 error:(id*)arg2;
- (id)initWithContainerURL:(id)arg1;
- (id)initWithToken:(id)arg1 options:(unsigned long long)arg2 error:(id*)arg3;
- (bool)isNew;
- (bool)isTransient;
- (bool)makeContainerLiveReplacingContainer:(id)arg1 reason:(unsigned long long)arg2 waitForDeletion:(bool)arg3 withError:(id*)arg4;
- (bool)makeContainerLiveWithError:(id*)arg1;
- (id)personaUniqueString;
- (bool)purgeContentWithError:(id*)arg1;
- (id)rawContainer;
- (bool)recreateDefaultStructureWithError:(id*)arg1;
- (bool)regenerateDirectoryUUIDWithError:(id*)arg1;
- (bool)removeUnderlyingContainerWaitingForDeletion:(bool)arg1 error:(id*)arg2;
- (void)setContainerClass:(unsigned long long)arg1;
- (void)setContainerURL:(id)arg1;
- (void)setDiskUsage:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (bool)setInfoValue:(id)arg1 forKey:(id)arg2 error:(id*)arg3;
- (void)setIsTransient:(bool)arg1;
- (void)setStatus:(unsigned long long)arg1;
- (unsigned long long)status;

@end


@interface MCMContainerPath : NSObject <MCMContainerPathHasComponents> {
    MCMContainerClassPath * _containerClassPath;
    NSString * _containerDataComponent;
    NSString * _containerPathIdentifier;
    NSString * _containerRootComponent;
    unsigned short  _dataPOSIXMode;
    MCMPOSIXUser * _dataPOSIXOwner;
    bool  _exists;
    unsigned short  _rootPOSIXMode;
    MCMPOSIXUser * _rootPOSIXOwner;
    unsigned short  _schemaPOSIXMode;
    MCMPOSIXUser * _schemaPOSIXOwner;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (nonatomic, readonly) NSURL *categoryURL;
@property (nonatomic, readonly) NSURL *classURL;
@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) MCMContainerClassPath *containerClassPath;
@property (nonatomic, readonly) NSString *containerDataComponent;
@property (nonatomic, readonly) NSURL *containerDataURL;
@property (nonatomic, readonly) NSString *containerPathIdentifier;
@property (nonatomic, readonly) NSString *containerRootComponent;
@property (nonatomic, readonly) NSURL *containerRootURL;
@property (nonatomic, readonly) unsigned short dataPOSIXMode;
@property (nonatomic, readonly) MCMPOSIXUser *dataPOSIXOwner;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool exists;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSURL *metadataURL;
@property (getter=isRandomized, nonatomic, readonly) bool randomized;
@property (nonatomic, readonly) unsigned short rootPOSIXMode;
@property (nonatomic, readonly) MCMPOSIXUser *rootPOSIXOwner;
@property (nonatomic, readonly) unsigned short schemaPOSIXMode;
@property (nonatomic, readonly) MCMPOSIXUser *schemaPOSIXOwner;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool transient;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;

+ (Class)_containerClassPathClass;
+ (id)_posixOwnerForContainerSubdirectories:(unsigned long long)arg1 user:(id)arg2;
+ (id)containerPathForContainerClassPath:(id)arg1 containerPathIdentifier:(id)arg2;
+ (id)containerPathForContainerIdentity:(id)arg1 containerPathIdentifier:(id)arg2;
+ (id)containerPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2 containerPathIdentifier:(id)arg3;
+ (id)containerPathFromURL:(id)arg1 containerClassPath:(id)arg2 relativePath:(id*)arg3;
+ (id)containerPathIdentifierForCodeSignIdentifier:(id)arg1 containerClass:(unsigned long long)arg2;

- (void).cxx_destruct;
- (bool)_createURLIfNecessary:(id)arg1 mode:(unsigned short)arg2 owner:(id)arg3 dataProtectionClass:(int)arg4 exists:(bool*)arg5 error:(id*)arg6;
- (bool)_obj1:(id)arg1 isEqualToObj2:(id)arg2;
- (id)baseURL;
- (id)categoryURL;
- (id)classURL;
- (unsigned long long)containerClass;
- (id)containerClassPath;
- (id)containerDataComponent;
- (id)containerDataURL;
- (id)containerPathForRealPath;
- (id)containerPathIdentifier;
- (id)containerRootComponent;
- (id)containerRootURL;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createDataURLIfNecessaryWithDataProtectionClass:(int)arg1 error:(id*)arg2;
- (bool)createIfNecessaryWithDataProtectionClass:(int)arg1 error:(id*)arg2;
- (unsigned short)dataPOSIXMode;
- (id)dataPOSIXOwner;
- (id)description;
- (bool)exists;
- (unsigned long long)hash;
- (id)initWithContainerClassPath:(id)arg1 containerPathIdentifier:(id)arg2 containerRootComponent:(id)arg3 containerDataComponent:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContainerPath:(id)arg1;
- (bool)isRandomized;
- (id)metadataURL;
- (unsigned short)rootPOSIXMode;
- (id)rootPOSIXOwner;
- (unsigned short)schemaPOSIXMode;
- (id)schemaPOSIXOwner;
- (void)setExists:(bool)arg1;
- (bool)transient;
- (id)userIdentity;

@end


@interface MCMContainerClassPath : NSObject <MCMContainerPathHasComponents, NSCopying> {
    NSURL * _baseURL;
    bool  _caseSensitive;
    bool  _caseSensitiveDetermined;
    NSString * _categoryComponent;
    NSURL * _categoryURL;
    NSString * _classComponent;
    NSURL * _classURL;
    bool  _classURLCreated;
    unsigned long long  _containerClass;
    bool  _exists;
    NSURL * _homeDirectoryURL;
    unsigned short  _posixMode;
    MCMPOSIXUser * _posixOwner;
    bool  _supportsDataProtection;
    bool  _supportsDataProtectionDetermined;
    bool  _symlinkClassURLCreated;
    MCMUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) NSURL *baseURL;
@property (getter=isCaseSensitive, nonatomic, readonly) bool caseSensitive;
@property (nonatomic, readonly) NSString *categoryComponent;
@property (nonatomic, readonly) NSURL *categoryURL;
@property (nonatomic, readonly) NSString *classComponent;
@property (nonatomic, readonly) NSURL *classURL;
@property (nonatomic, readonly) unsigned long long containerClass;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool exists;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned short posixMode;
@property (nonatomic, readonly) MCMPOSIXUser *posixOwner;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsDataProtection;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;

+ (id)_baseURLForUserIdentity:(id)arg1;
+ (id)_baseURLForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2;
+ (id)_categoryComponentForContainerClass:(unsigned long long)arg1;
+ (id)_classComponentForContainerClass:(unsigned long long)arg1;
+ (bool)_inLibraryRepairBlock_createURLIfNecessary:(id)arg1 mode:(unsigned short)arg2 owner:(id)arg3 dataProtectionClass:(int)arg4 exists:(bool*)arg5 error:(id*)arg6;
+ (unsigned short)_modeForContainerClass:(unsigned long long)arg1;
+ (id)containerPathForContainerIdentity:(id)arg1;
+ (id)containerPathForUserIdentity:(id)arg1 containerClass:(unsigned long long)arg2;
+ (id)containerPathTypeClasses;
+ (id)posixOwnerForContainerClass:(unsigned long long)arg1 user:(id)arg2;

- (void).cxx_destruct;
- (bool)_createURLIfNecessary:(id)arg1 mode:(unsigned short)arg2 owner:(id)arg3 dataProtectionClass:(int)arg4 error:(id*)arg5;
- (bool)_obj1:(id)arg1 isEqualToObj2:(id)arg2;
- (id)baseURL;
- (id)categoryComponent;
- (id)categoryURL;
- (id)classComponent;
- (id)classURL;
- (unsigned long long)containerClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)createIfNecessaryWithError:(id*)arg1;
- (id)description;
- (bool)exists;
- (unsigned long long)hash;
- (id)initWithBaseURL:(id)arg1 categoryComponent:(id)arg2 classComponent:(id)arg3 containerClass:(unsigned long long)arg4 POSIXOwner:(id)arg5 POSIXMode:(unsigned short)arg6 userIdentity:(id)arg7;
- (bool)isCaseSensitive;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContainerClassPath:(id)arg1;
- (unsigned short)posixMode;
- (id)posixOwner;
- (void)setExists:(bool)arg1;
- (bool)supportsDataProtection;
- (id)userIdentity;

@end

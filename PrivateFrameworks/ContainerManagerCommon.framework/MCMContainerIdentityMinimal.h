
@interface MCMContainerIdentityMinimal : NSObject <NSCopying> {
    unsigned long long  _containerClass;
    unsigned int  _disposition;
    NSString * _identifier;
    unsigned int  _platform;
    MCMUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) unsigned int disposition;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned int platform;
@property (nonatomic, readonly) MCMUserIdentity *userIdentity;

+ (id)minimalContainerIdentityFromPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long*)arg3;

- (void).cxx_destruct;
- (unsigned long long)containerClass;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)description;
- (unsigned int)disposition;
- (unsigned long long)hash;
- (id)identifier;
- (id)identityByChangingUserIdentity:(id)arg1;
- (id)identityBySettingPlatform:(unsigned int)arg1;
- (id)init;
- (id)initWithLibsystemContainer:(struct container_object_s { }*)arg1 defaultUserIdentity:(id)arg2 userIdentityCache:(id)arg3 error:(unsigned long long*)arg4;
- (id)initWithPlist:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long*)arg3;
- (id)initWithUserIdentity:(id)arg1 identifier:(id)arg2 containerClass:(unsigned long long)arg3 platform:(unsigned int)arg4 error:(unsigned long long*)arg5;
- (id)initWithVersion1PlistDictionary:(id)arg1 userIdentityCache:(id)arg2 error:(unsigned long long*)arg3;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContainerIdentity:(id)arg1;
- (id)minimalIdentity;
- (unsigned int)platform;
- (id)plist;
- (id)userIdentity;

@end

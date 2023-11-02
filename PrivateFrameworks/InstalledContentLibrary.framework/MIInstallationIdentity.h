
@interface MIInstallationIdentity : NSObject <NSCopying> {
    NSData * _installSessionID;
    NSData * _uniqueInstallID;
}

@property (nonatomic, copy) NSData *installSessionID;
@property (nonatomic, copy) NSData *uniqueInstallID;

+ (id)identityForUpdateOfBundle:(id)arg1 error:(id*)arg2;
+ (id)installSessionIDEAName;
+ (id)installationIdentityForBundle:(id)arg1 settingIfNotSet:(bool)arg2 error:(id*)arg3;
+ (id)newIdentityForBundle:(id)arg1;
+ (id)uniqueInstallIDEAName;

- (void).cxx_destruct;
- (bool)_writeToBundle:(id)arg1 error:(id*)arg2;
- (bool)_writeToBundle:(id)arg1 fd:(int)arg2 fdLocation:(id)arg3 error:(id*)arg4;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSessionID:(id)arg1 uniqueID:(id)arg2;
- (id)installSessionID;
- (bool)isEqual:(id)arg1;
- (void)setInstallSessionID:(id)arg1;
- (void)setUniqueInstallID:(id)arg1;
- (id)uniqueInstallID;
- (bool)writeToBundle:(id)arg1 error:(id*)arg2;

@end

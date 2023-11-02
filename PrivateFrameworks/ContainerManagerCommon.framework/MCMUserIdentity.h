
@interface MCMUserIdentity : NSObject <NSCopying> {
    long long  _extensionHandle;
    NSURL * _homeDirectoryURL;
    NSString * _identifier;
    unsigned int  _kernelPersonaID;
    int  _personaType;
    NSString * _personaUniqueString;
    MCMPOSIXUser * _posixUser;
}

@property (getter=isDataSeparated, nonatomic, readonly) bool dataSeparated;
@property (nonatomic) long long extensionHandle;
@property (nonatomic, readonly) bool homeDirectoryExists;
@property (nonatomic, readonly) NSURL *homeDirectoryURL;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned int kernelPersonaID;
@property (getter=isNoSpecificPersona, nonatomic, readonly) bool noSpecificPersona;
@property (nonatomic, readonly) int personaType;
@property (nonatomic, readonly) NSString *personaUniqueString;
@property (nonatomic, readonly, copy) id plist;
@property (nonatomic, readonly) MCMPOSIXUser *posixUser;
@property (nonatomic, readonly) NSString *shortDescription;

+ (id)_identifierForPOSIXUID:(unsigned int)arg1 personaUniqueString:(id)arg2 personaType:(int)arg3;
+ (bool)isUserIdentityRequiredForContainerClass:(unsigned long long)arg1;
+ (id)userIdentityWithPlist:(id)arg1 cache:(id)arg2 error:(unsigned long long*)arg3;

- (void).cxx_destruct;
- (id)_descriptionForPersonaType:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (long long)extensionHandle;
- (unsigned long long)hash;
- (bool)homeDirectoryExists;
- (id)homeDirectoryURL;
- (id)identifier;
- (id)init;
- (id)initWithPOSIXUser:(id)arg1 homeDirectoryURL:(id)arg2 personaUniqueString:(id)arg3 personaType:(int)arg4 kernelPersonaID:(unsigned int)arg5;
- (id)initWithPlist:(id)arg1 cache:(id)arg2 error:(unsigned long long*)arg3;
- (id)initWithVersion1PlistDictionary:(id)arg1 cache:(id)arg2 error:(unsigned long long*)arg3;
- (id)initWithVersion2PlistDictionary:(id)arg1 cache:(id)arg2 error:(unsigned long long*)arg3;
- (bool)isDataSeparated;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUserIdentity:(id)arg1;
- (bool)isNoSpecificPersona;
- (bool)isStrictlyEqualToUserIdentity:(id)arg1;
- (unsigned int)kernelPersonaID;
- (int)personaType;
- (id)personaUniqueString;
- (id)plist;
- (id)posixUser;
- (void)setExtensionHandle:(long long)arg1;
- (id)shortDescription;
- (id)userIdentityWithPOSIXUser:(id)arg1;

@end


@interface MCMPOSIXUser : NSObject <NSCopying> {
    unsigned int  _UID;
    NSURL * _homeDirectoryURL;
    NSString * _name;
    unsigned int  _primaryGID;
    bool  _roleUser;
    bool  _root;
    NSURL * _unvalidatedHomeDirectoryURL;
    bool  _useableHomeDirectory;
}

@property (nonatomic, readonly) unsigned int UID;
@property (nonatomic, readonly) NSURL *homeDirectoryURL;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int primaryGID;
@property (getter=isRoleUser, nonatomic, readonly) bool roleUser;
@property (getter=isRoot, nonatomic, readonly) bool root;
@property (nonatomic, readonly) NSURL *unvalidatedHomeDirectoryURL;
@property (getter=hasUseableHomeDirectory, nonatomic, readonly) bool useableHomeDirectory;

+ (id)_getCachedUID:(unsigned int)arg1 flush:(bool)arg2 onCacheMiss:(id /* block */)arg3;
+ (bool)_isRoleUserWithUID:(unsigned int)arg1 homeDirectoryURL:(id)arg2;
+ (id)_posixUserWithPasswdPtr:(struct passwd { char *x1; char *x2; unsigned int x3; unsigned int x4; long long x5; char *x6; char *x7; char *x8; char *x9; long long x10; }*)arg1;
+ (id)_posixUserWithUID:(unsigned int)arg1 name:(id)arg2 useUID:(bool)arg3;
+ (id)currentPOSIXUser;
+ (void)flush;
+ (id)nobody;
+ (id)posixUserWithName:(id)arg1;
+ (id)posixUserWithUID:(unsigned int)arg1;
+ (id)root;

- (void).cxx_destruct;
- (unsigned int)UID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fullDescription;
- (bool)hasUseableHomeDirectory;
- (unsigned long long)hash;
- (id)homeDirectoryURL;
- (id)initWithUID:(unsigned int)arg1 primaryGID:(unsigned int)arg2 homeDirectoryURL:(id)arg3 unvalidatedHomeDirectoryURL:(id)arg4 name:(id)arg5 roleUser:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPOSIXUser:(id)arg1;
- (bool)isRoleUser;
- (bool)isRoot;
- (id)name;
- (unsigned int)primaryGID;
- (id)unvalidatedHomeDirectoryURL;

@end

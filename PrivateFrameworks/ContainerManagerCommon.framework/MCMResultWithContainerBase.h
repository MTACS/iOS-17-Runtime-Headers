
@interface MCMResultWithContainerBase : MCMResultBase <MCMResultWithContainer> {
    unsigned long long  _containerClass;
    NSString * _containerPathIdentifier;
    bool  _existed;
    NSString * _identifier;
    NSDictionary * _info;
    NSString * _personaUniqueString;
    MCMPOSIXUser * _posixUser;
    char * _sandboxToken;
    bool  _transient;
    NSURL * _url;
    NSString * _userManagedAssetsRelPath;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) unsigned long long containerClass;
@property (nonatomic, readonly) NSString *containerPathIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MCMError *error;
@property (nonatomic, readonly) bool existed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *info;
@property (nonatomic, readonly) NSString *personaUniqueString;
@property (nonatomic, readonly) MCMPOSIXUser *posixUser;
@property (nonatomic, readonly) char *sandboxToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool transient;
@property (nonatomic, readonly) NSURL *url;
@property (nonatomic, readonly) NSString *userManagedAssetsRelPath;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (unsigned long long)containerClass;
- (id)containerPathIdentifier;
- (void)dealloc;
- (bool)encodeResultOntoReply:(id)arg1;
- (bool)existed;
- (id)identifier;
- (id)info;
- (id)initWithContainerPath:(id)arg1 containerIdentity:(id)arg2 uuid:(id)arg3 sandboxToken:(const char *)arg4 includePath:(bool)arg5;
- (id)initWithMetadata:(id)arg1 sandboxToken:(const char *)arg2 includePath:(bool)arg3 includeInfo:(bool)arg4 includeUserManagedAssetsRelPath:(bool)arg5;
- (id)initWithUUID:(id)arg1 containerPathIdentifier:(id)arg2 identifier:(id)arg3 containerClass:(unsigned long long)arg4 POSIXUser:(id)arg5 personaUniqueString:(id)arg6 sandboxToken:(const char *)arg7 existed:(bool)arg8 url:(id)arg9 info:(id)arg10 transient:(bool)arg11 userManagedAssetsRelPath:(id)arg12;
- (id)personaUniqueString;
- (id)posixUser;
- (char *)sandboxToken;
- (bool)transient;
- (id)url;
- (id)userManagedAssetsRelPath;
- (id)uuid;

@end

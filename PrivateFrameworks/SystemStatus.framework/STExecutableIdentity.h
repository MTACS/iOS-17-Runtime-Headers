
@interface STExecutableIdentity : NSObject <BSDescriptionProviding, NSCopying, NSSecureCoding> {
    BSAuditToken * _bsAuditToken;
    NSString * _bundleIdentifier;
    NSString * _bundlePath;
    NSString * _executablePath;
    NSString * _personaUniqueString;
    bool  _systemExecutable;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (nonatomic, readonly, copy) NSString *bundlePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *executablePath;
@property (nonatomic, readonly) bool hasAuditToken;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *personaUniqueString;
@property (readonly) Class superclass;
@property (getter=isSystemExecutable, nonatomic, readonly) bool systemExecutable;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bundleIdentifier;
- (id)bundlePath;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)executablePath;
- (bool)hasAuditToken;
- (unsigned long long)hash;
- (id)initWithApplicationBundleIdentifier:(id)arg1;
- (id)initWithApplicationBundleIdentifier:(id)arg1 personaUniqueString:(id)arg2;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1 bundlePath:(id)arg2 executablePath:(id)arg3 bundleIdentifier:(id)arg4 personaUniqueString:(id)arg5 systemExecutable:(bool)arg6;
- (id)initWithAuditToken:(struct { unsigned int x1[8]; })arg1 bundlePath:(id)arg2 executablePath:(id)arg3 systemExecutable:(bool)arg4;
- (id)initWithBundlePath:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithExecutablePath:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSystemExecutable;
- (bool)matchesExecutableIdentity:(id)arg1;
- (id)personaUniqueString;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

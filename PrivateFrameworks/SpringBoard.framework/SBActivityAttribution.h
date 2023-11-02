
@interface SBActivityAttribution : NSObject <BSDescriptionProviding, NSCopying> {
    STActivityAttribution * _attribution;
    NSString * _attributionGroup;
    bool  _isSystemExecutable;
    int  _pid;
}

@property (nonatomic, readonly, copy) NSString *activeEntityBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *attributionGroup;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *executableDisplayName;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isSystemService;
@property (nonatomic, readonly) int pid;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *website;

- (void).cxx_destruct;
- (id)_activityAttribution;
- (id)activeEntityBundleIdentifier;
- (id)attributionGroup;
- (struct { unsigned int x1[8]; })auditToken;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)displayName;
- (id)executableDisplayName;
- (bool)hasMatchingAttributedEntity:(id)arg1;
- (unsigned long long)hash;
- (id)initWithSTActivityAttribution:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSystemService;
- (int)pid;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)website;

@end

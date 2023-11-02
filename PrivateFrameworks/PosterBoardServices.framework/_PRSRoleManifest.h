
@interface _PRSRoleManifest : NSObject <PRSRoleProviding> {
    NSString * _bundleIdentifier;
    NSDictionary * _infoDictionary;
    NSSet * _knownSupportedRoles;
    LSPropertyList * _propertyList;
    NSString * _rawSpecifiedDefaultRole;
    NSSet * _rawSupportedRoles;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *derivedDefaultRole;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *knownSupportedRoles;
@property (nonatomic, readonly) NSString *prs_defaultRole;
@property (nonatomic, readonly) NSSet *prs_supportedRoles;
@property (nonatomic, readonly) NSString *rawSpecifiedDefaultRole;
@property (nonatomic, readonly) NSSet *rawSupportedRoles;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_hydrate;
- (id)derivedDefaultRole;
- (id)initWithInfoDictionary:(id)arg1;
- (id)initWithPropertyList:(id)arg1;
- (id)knownSupportedRoles;
- (id)objectForKey:(id)arg1 ofClass:(Class)arg2;
- (id)prs_defaultRole;
- (id)prs_supportedRoles;
- (id)rawSpecifiedDefaultRole;
- (id)rawSupportedRoles;

@end

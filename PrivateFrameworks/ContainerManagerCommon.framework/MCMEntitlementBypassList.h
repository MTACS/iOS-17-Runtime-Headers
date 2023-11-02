
@interface MCMEntitlementBypassList : NSObject {
    NSDictionary * _bypassListedLookupByCodeSignIdentifier;
    NSDictionary * _systemEntitlementBypassList;
    NSDictionary * _systemGroupEntitlementBypassList;
}

@property (nonatomic, retain) NSDictionary *systemEntitlementBypassList;
@property (nonatomic, retain) NSDictionary *systemGroupEntitlementBypassList;

+ (id)sharedBypassList;

- (void).cxx_destruct;
- (id)_convertArraysToSetsInNestedDictionary:(id)arg1;
- (bool)containerIdIsWellknown:(id)arg1 class:(unsigned long long)arg2;
- (id)initWithSystemContainerMapping:(id)arg1 systemGroupContainerMapping:(id)arg2 bypassListedCodeSignIdentifierMapping:(id)arg3;
- (bool)isLookupAllowedToBypassEntitlementFromCodeSignIdentifier:(id)arg1 forContainerClass:(unsigned long long)arg2 containerIdentifier:(id)arg3;
- (void)setSystemEntitlementBypassList:(id)arg1;
- (void)setSystemGroupEntitlementBypassList:(id)arg1;
- (bool)systemContainerIdIsWellknown:(id)arg1;
- (id)systemEntitlementBypassList;
- (bool)systemGroupContainerIdIsWellknown:(id)arg1;
- (id)systemGroupEntitlementBypassList;
- (id)wellKnownContainerIdentifiersForSandboxPushDownCompatibilitySet;
- (id)wellknownContainerForId:(id)arg1 class:(unsigned long long)arg2;
- (id)wellknownSystemContainerForId:(id)arg1;
- (id)wellknownSystemContainers;
- (id)wellknownSystemGroupContainerForId:(id)arg1;
- (id)wellknownSystemGroupContainers;

@end

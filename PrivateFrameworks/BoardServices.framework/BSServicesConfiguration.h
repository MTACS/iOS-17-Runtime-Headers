
@interface BSServicesConfiguration : NSObject <BSDescriptionProviding> {
    NSDictionary * _disabledDomainsByIdentifier;
    NSDictionary * _domainsByIdentifier;
    NSOrderedSet * _orderedDomains;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *disabledDomains;
@property (nonatomic, readonly, copy) NSSet *domains;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)activateManualDomain:(id)arg1;
+ (void)activateXPCService;
+ (id)bootstrapConfiguration;
+ (id)defaultConfiguration;
+ (id)extendAutomaticBootstrapCompletion;
+ (id)registerDynamicDomainsFromPlist:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)disabledDomains;
- (id)domainForIdentifier:(id)arg1;
- (id)domainForMachName:(id)arg1;
- (id)domains;
- (id)domainsContainingServiceIdentifier:(id)arg1;
- (id)init;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

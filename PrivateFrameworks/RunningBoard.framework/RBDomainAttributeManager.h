
@interface RBDomainAttributeManager : NSObject <RBDomainAttributeManaging, RBStateCapturing> {
    <RBDomainAttributeDataProviding> * _dataProvider;
    NSDictionary * _domainAttributeTemplatesByDomain;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *stateCaptureTitle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)additionalRestrictionsForDomain:(id)arg1 andName:(id)arg2;
- (id)allEntitlements;
- (bool)areTargetPropertiesValidForContext:(id)arg1 forAttributeWithDomain:(id)arg2 andName:(id)arg3;
- (id)attributesForDomain:(id)arg1 andName:(id)arg2 context:(id)arg3 withError:(id*)arg4;
- (id)captureState;
- (bool)containsAttributeWithDomain:(id)arg1 andName:(id)arg2;
- (id)debugDescription;
- (id)endowmentNamespaceForDomain:(id)arg1 andName:(id)arg2;
- (id)initWithDataProvider:(id)arg1;
- (id)originatorEntitlementsForDomain:(id)arg1 andName:(id)arg2;
- (id)restrictionsForDomain:(id)arg1 andName:(id)arg2;
- (id)stateCaptureTitle;
- (id)targetEntitlementsForDomain:(id)arg1 andName:(id)arg2;

@end

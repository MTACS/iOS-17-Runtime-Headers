
@interface RBDomainAttributeTemplate : NSObject <RBAttributeTemplateConfiguring> {
    NSDictionary * _additionalRestrictions;
    NSArray * _attributeGroups;
    NSString * _domain;
    NSString * _endowmentNamespace;
    NSString * _name;
    RBEntitlementPredicate * _originatorEntitlements;
    RBDomainRestriction * _restriction;
    NSDictionary * _targetBundleProperties;
    RBEntitlementPredicate * _targetEntitlements;
}

@property (nonatomic, copy) NSDictionary *additionalRestrictions;
@property (nonatomic, retain) NSArray *attributeGroups;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) RBEntitlementPredicate *originatorEntitlements;
@property (nonatomic, copy) RBDomainRestriction *restriction;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *targetBundleProperties;
@property (nonatomic, copy) RBEntitlementPredicate *targetEntitlements;

- (void).cxx_destruct;
- (id)additionalRestrictions;
- (id)attributeGroups;
- (id)description;
- (id)originatorEntitlements;
- (id)restriction;
- (void)setAdditionalRestrictions:(id)arg1;
- (void)setAttributeGroups:(id)arg1;
- (void)setOriginatorEntitlements:(id)arg1;
- (void)setRestriction:(id)arg1;
- (void)setTargetBundleProperties:(id)arg1;
- (void)setTargetEntitlements:(id)arg1;
- (id)targetBundleProperties;
- (id)targetEntitlements;

@end

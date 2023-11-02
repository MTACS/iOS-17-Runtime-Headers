
@interface BSServiceDomainSpecification : NSObject <BSDescriptionProviding> {
    NSSet * _derivedServiceRestrictions;
    NSArray * _disableIfFeatureFlags;
    NSArray * _enableIfFeatureFlags;
    NSString * _identifier;
    NSString * _machName;
    NSOrderedSet * _orderedServices;
    NSDictionary * _servicesByIdentifier;
    unsigned long long  _start;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *machName;
@property (nonatomic, readonly, copy) NSSet *services;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)identifier;
- (id)init;
- (id)machName;
- (id)serviceForIdentifier:(id)arg1;
- (id)services;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end

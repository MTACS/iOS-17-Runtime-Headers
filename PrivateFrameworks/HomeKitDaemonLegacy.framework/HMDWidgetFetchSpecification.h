
@interface HMDWidgetFetchSpecification : HMFObject {
    NSSet * _affectedWidgetKinds;
    NSSet * _associatedServiceTypes;
    NSSet * _characteristicTypes;
    NSString * _name;
    NSSet * _serviceTypes;
}

@property (readonly, copy) NSSet *affectedWidgetKinds;
@property (readonly, copy) NSSet *associatedServiceTypes;
@property (readonly, copy) NSSet *characteristicTypes;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSSet *serviceTypes;

+ (id)allHomeWidgetKinds;
+ (id)allOtherHomesSingleAccessorySecurityFetchSpecifications;
+ (id)lightsFetchSpecifications;
+ (id)mainHomeInteractiveFetchSpecifications;
+ (id)mainHomeSecurityFetchSpecifications;

- (void).cxx_destruct;
- (id)affectedWidgetKinds;
- (id)associatedServiceTypes;
- (id)attributeDescriptions;
- (id)characteristicTypes;
- (id)initWithName:(id)arg1 serviceTypes:(id)arg2 associatedServiceTypes:(id)arg3 characteristicTypes:(id)arg4 affectedWidgetKinds:(id)arg5;
- (id)name;
- (id)serviceTypes;

@end

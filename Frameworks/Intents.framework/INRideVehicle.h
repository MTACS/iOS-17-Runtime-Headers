
@interface INRideVehicle : NSObject <INCacheableContainer, INImageProxyInjecting, INRideVehicleExport, NSCopying, NSSecureCoding, WFNaming> {
    CLLocation * _location;
    NSString * _manufacturer;
    INImage * _mapAnnotationImage;
    NSString * _model;
    NSString * _registrationPlate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, copy) NSString *manufacturer;
@property (nonatomic, copy) INImage *mapAnnotationImage;
@property (nonatomic, copy) NSString *model;
@property (nonatomic, copy) NSString *registrationPlate;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *wfName;

// Image: /System/Library/Frameworks/Intents.framework/Intents

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_dictionaryRepresentation;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)location;
- (id)manufacturer;
- (id)mapAnnotationImage;
- (id)model;
- (id)registrationPlate;
- (void)setLocation:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setMapAnnotationImage:(id)arg1;
- (void)setModel:(id)arg1;
- (void)setRegistrationPlate:(id)arg1;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

- (id)wfName;

@end


@interface GCGenericDeviceModel : NSObject <NSCopying, NSSecureCoding, _GCDefaultLogicalDeviceDelegate, _GCDefaultPhysicalDeviceDelegate> {
    GCGenericDeviceDriverModel * _driver;
    NSNumber * _formFitting;
    GCGenericDevicePhysicalInputModel * _physicalInput;
    NSString * _productCategory;
    NSString * _productName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) GCGenericDeviceDriverModel *driver;
@property (getter=isFormFitting, readonly, copy) NSNumber *formFitting;
@property (readonly) unsigned long long hash;
@property (readonly, copy) GCGenericDevicePhysicalInputModel *physicalInput;
@property (readonly, copy) NSString *productCategory;
@property (readonly, copy) NSString *productName;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation

+ (id)description;
+ (id)modelWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)driver;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)isFormFitting;
- (id)physicalInput;
- (id)productCategory;
- (id)productName;

// Image: /System/Library/Frameworks/GameController.framework/GameController

+ (id)defaultLocalizedNameForElement:(id)arg1;
+ (id)defaultSymbolNameForElement:(id)arg1;
+ (bool)elementsMakeValidExtendedGamepad:(id)arg1;
+ (bool)elementsMakeValidGamepad:(id)arg1;

- (id)logicalDevice:(id)arg1 makeControllerInputDescriptionWithIdentifier:(id)arg2 bindings:(id)arg3;
- (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileDescriptionWithIdentifier:(id)arg2 bindings:(id)arg3;
- (id)logicalDevice:(id)arg1 makeControllerPhysicalInputProfileWithIdentifier:(id)arg2;
- (Class)logicalDeviceControllerDescriptionClass:(id)arg1;
- (bool)logicalDeviceControllerIsAttachedToHost:(id)arg1;
- (id)logicalDeviceControllerProductCategory:(id)arg1;
- (id)physicalDeviceGetHapticCapabilities:(id)arg1;
- (id)physicalDeviceGetHapticCapabilityGraph:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end

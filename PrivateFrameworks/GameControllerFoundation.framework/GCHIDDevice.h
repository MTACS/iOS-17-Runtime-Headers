
@interface GCHIDDevice : HIDDevice <GCHIDDeviceAttributes>

@property (readonly) NSArray *elements;
@property (readonly) NSString *manufacturer;
@property (readonly) NSNumber *maxFeatureReportSize;
@property (readonly) NSNumber *maxInputReportSize;
@property (readonly) NSNumber *maxOutputReportSize;
@property (readonly) NSString *product;
@property (readonly) NSNumber *productID;
@property (readonly) NSString *transport;
@property (readonly) NSNumber *vendorID;
@property (readonly) NSNumber *versionNumber;

- (id)debugDescription;
- (id)elements;
- (id)init;
- (id)initWithService:(unsigned int)arg1;
- (id)manufacturer;
- (id)maxFeatureReportSize;
- (id)maxInputReportSize;
- (id)maxOutputReportSize;
- (id)product;
- (id)productID;
- (id)transport;
- (id)valueForHIDDeviceKey:(id)arg1;
- (id)valueForKey:(id)arg1;
- (id)vendorID;
- (id)versionNumber;

@end

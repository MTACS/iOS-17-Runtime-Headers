
@interface GCHIDDeviceSnapshot : NSObject <GCHIDDeviceAttributes, NSSecureCoding> {
    NSArray * _elements;
    NSString * _manufacturer;
    NSNumber * _maxFeatureReportSize;
    NSNumber * _maxInputReportSize;
    NSNumber * _maxOutputReportSize;
    NSString * _product;
    NSNumber * _productID;
    NSString * _transport;
    NSNumber * _vendorID;
    NSNumber * _versionNumber;
}

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

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)elements;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHIDDevice:(id)arg1;
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

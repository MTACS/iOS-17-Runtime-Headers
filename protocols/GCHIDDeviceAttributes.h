
@protocol GCHIDDeviceAttributes

@required

- (NSArray *)elements;
- (NSString *)manufacturer;
- (NSNumber *)maxFeatureReportSize;
- (NSNumber *)maxInputReportSize;
- (NSNumber *)maxOutputReportSize;
- (NSString *)product;
- (NSNumber *)productID;
- (NSString *)transport;
- (id)valueForHIDDeviceKey:(NSString *)arg1;
- (NSNumber *)vendorID;
- (NSNumber *)versionNumber;

@end

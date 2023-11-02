
@interface AXSSMotionTrackingHIDInput : AXSSMotionTrackingInput {
    NSString * _deviceName;
    NSString * _deviceUniqueID;
    bool  _mfiAuthenticated;
    NSNumber * _productID;
    NSNumber * _vendorID;
}

@property (nonatomic, copy) NSString *deviceName;
@property (nonatomic, copy) NSString *deviceUniqueID;
@property (nonatomic, readonly) NSDictionary *hidMatchingDictionary;
@property (nonatomic) bool mfiAuthenticated;
@property (nonatomic, copy) NSNumber *productID;
@property (nonatomic, copy) NSNumber *vendorID;

+ (id)motionTrackingHIDInputWithDevice:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)deviceName;
- (id)deviceUniqueID;
- (void)encodeWithCoder:(id)arg1;
- (id)hidMatchingDictionary;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceUniqueID:(id)arg1 productID:(id)arg2 vendorID:(id)arg3 deviceName:(id)arg4 mfiAuthenticated:(bool)arg5;
- (id)initWithPlistDictionary:(id)arg1;
- (bool)isHIDDevice;
- (bool)mfiAuthenticated;
- (id)name;
- (id)plistDictionary;
- (id)productID;
- (void)setDeviceName:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setMfiAuthenticated:(bool)arg1;
- (void)setProductID:(id)arg1;
- (void)setVendorID:(id)arg1;
- (bool)supportsExpressions;
- (unsigned long long)trackingType;
- (id)uniqueIdentifier;
- (id)vendorID;

@end

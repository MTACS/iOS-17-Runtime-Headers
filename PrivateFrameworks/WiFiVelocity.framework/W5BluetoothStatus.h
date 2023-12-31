
@interface W5BluetoothStatus : NSObject <NSCopying, NSSecureCoding> {
    NSString * _address;
    NSArray * _devices;
    bool  _isConnectable;
    bool  _isDiscoverable;
    bool  _isScanning;
    bool  _powerOn;
}

@property (nonatomic, copy) NSString *address;
@property (nonatomic, copy) NSArray *devices;
@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic) bool isConnectable;
@property (nonatomic) bool isDiscoverable;
@property (nonatomic) bool isScanning;
@property (nonatomic) bool powerOn;

// Image: /System/Library/PrivateFrameworks/WiFiVelocity.framework/WiFiVelocity

+ (bool)supportsSecureCoding;

- (id)address;
- (bool)conformsToProtocol:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)devices;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isConnectable;
- (bool)isDiscoverable;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToBluetoothStatus:(id)arg1;
- (bool)isScanning;
- (bool)powerOn;
- (void)setAddress:(id)arg1;
- (void)setDevices:(id)arg1;
- (void)setIsConnectable:(bool)arg1;
- (void)setIsDiscoverable:(bool)arg1;
- (void)setIsScanning:(bool)arg1;
- (void)setPowerOn:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/NPTKit.framework/NPTKit

- (id)dictionary;

@end

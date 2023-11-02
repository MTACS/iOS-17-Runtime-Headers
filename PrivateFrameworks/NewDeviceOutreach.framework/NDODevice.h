
@interface NDODevice : NSObject <NSSecureCoding> {
    NSDate * _activationDate;
    unsigned long long  _deviceType;
    NSString * _name;
    NSString * _productID;
    NSString * _serialNumber;
}

@property (retain) NSDate *activationDate;
@property unsigned long long deviceType;
@property (retain) NSString *name;
@property (retain) NSString *productID;
@property (retain) NSString *serialNumber;

+ (id)deviceWithName:(id)arg1 serialNumber:(id)arg2 activationDate:(id)arg3 deviceType:(unsigned long long)arg4;
+ (id)deviceWithName:(id)arg1 serialNumber:(id)arg2 activationDate:(id)arg3 deviceType:(unsigned long long)arg4 productID:(id)arg5;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)activationDate;
- (id)description;
- (unsigned long long)deviceType;
- (id)deviceTypeString;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 serialNumber:(id)arg2 activationDate:(id)arg3 deviceType:(unsigned long long)arg4 productID:(id)arg5;
- (id)name;
- (id)productID;
- (id)productPlaceholderImage;
- (id)serialNumber;
- (void)setActivationDate:(id)arg1;
- (void)setDeviceType:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setProductID:(id)arg1;
- (void)setSerialNumber:(id)arg1;

@end

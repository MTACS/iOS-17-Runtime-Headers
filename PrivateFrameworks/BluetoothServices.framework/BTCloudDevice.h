
@interface BTCloudDevice : NSObject <NSSecureCoding> {
    NSString * _bluetoothAddress;
    NSString * _manufacturer;
    NSString * _modelNumber;
    NSString * _nickname;
    NSString * _productID;
    NSString * _vendorID;
}

@property (nonatomic, retain) NSString *bluetoothAddress;
@property (nonatomic, retain) NSString *manufacturer;
@property (nonatomic, retain) NSString *modelNumber;
@property (nonatomic, retain) NSString *nickname;
@property (nonatomic, retain) NSString *productID;
@property (nonatomic, retain) NSString *vendorID;

+ (id)deviceWithBluetoothAddress:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)bluetoothAddress;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBluetoothAddress:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)manufacturer;
- (id)modelNumber;
- (id)nickname;
- (id)productID;
- (void)setBluetoothAddress:(id)arg1;
- (void)setManufacturer:(id)arg1;
- (void)setModelNumber:(id)arg1;
- (void)setNickname:(id)arg1;
- (void)setProductID:(id)arg1;
- (void)setVendorID:(id)arg1;
- (id)vendorID;

@end

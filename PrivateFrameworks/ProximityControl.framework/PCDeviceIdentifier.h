
@interface PCDeviceIdentifier : NSObject <NSSecureCoding> {
    long long  _assetType;
    NSString * _deviceName;
}

@property (nonatomic) long long assetType;
@property (nonatomic, retain) NSString *deviceName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)assetType;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1;
- (void)setAssetType:(long long)arg1;
- (void)setDeviceName:(id)arg1;

@end

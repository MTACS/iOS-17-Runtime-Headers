
@interface AKDeviceListResponse : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSArray * _deviceList;
    NSString * _deviceListVersion;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSArray *deviceList;
@property (nonatomic, copy) NSString *deviceListVersion;

+ (id)deviceMapFromResponseBody:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_parseDevicesFromResponseBody:(id)arg1;
- (id)altDSID;
- (id)description;
- (id)deviceList;
- (id)deviceListVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResponseBody:(id)arg1;
- (void)setAltDSID:(id)arg1;
- (void)setDeviceList:(id)arg1;
- (void)setDeviceListVersion:(id)arg1;

@end

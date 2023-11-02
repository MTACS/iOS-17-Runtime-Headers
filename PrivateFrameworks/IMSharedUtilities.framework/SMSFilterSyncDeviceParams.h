
@interface SMSFilterSyncDeviceParams : NSObject <NSCoding, NSSecureCoding> {
    NSString * _deviceUniqueID;
    NSString * _filterExtensionName;
    unsigned long long  _smsFilterCapabilitiesOptions;
}

@property (nonatomic, retain) NSString *deviceUniqueID;
@property (nonatomic, retain) NSString *filterExtensionName;
@property unsigned long long smsFilterCapabilitiesOptions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)deviceUniqueID;
- (void)encodeWithCoder:(id)arg1;
- (id)filterExtensionName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setDeviceUniqueID:(id)arg1;
- (void)setFilterExtensionName:(id)arg1;
- (void)setSmsFilterCapabilitiesOptions:(unsigned long long)arg1;
- (unsigned long long)smsFilterCapabilitiesOptions;

@end


@interface PKDeviceSharingCapabilities : NSObject <NSCopying, NSSecureCoding> {
    NSString * _altDSID;
    NSString * _deviceRegion;
    PKOSVersionRequirement * _fromDeviceVersion;
    NSString * _handle;
    bool  _supportsManatee;
}

@property (nonatomic, copy) NSString *altDSID;
@property (nonatomic, copy) NSString *deviceRegion;
@property (nonatomic, retain) PKOSVersionRequirement *fromDeviceVersion;
@property (nonatomic, copy) NSString *handle;
@property (nonatomic) bool supportsManatee;

+ (id)deviceSharingCapbilitesRequestWithProtobuf:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceRegion;
- (void)encodeWithCoder:(id)arg1;
- (id)fromDeviceVersion;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)protobuf;
- (void)setAltDSID:(id)arg1;
- (void)setDeviceRegion:(id)arg1;
- (void)setFromDeviceVersion:(id)arg1;
- (void)setHandle:(id)arg1;
- (void)setSupportsManatee:(bool)arg1;
- (bool)supportsManatee;

@end

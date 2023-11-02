
@interface HMFWiFiNetworkInfo : HMFObject <HMFObject, NSCopying, NSSecureCoding> {
    HMFMACAddress * _MACAddress;
    NSString * _SSID;
}

@property (readonly, copy) HMFMACAddress *MACAddress;
@property (readonly, copy) NSString *SSID;
@property (nonatomic, readonly, copy) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)MACAddress;
- (id)SSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMACAddress:(id)arg1 SSID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToNetworkInfo:(id)arg1;
- (id)propertyDescription;

@end

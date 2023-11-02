
@interface MTSWiFiNetworkAssociation : NSObject <NSCopying, NSSecureCoding> {
    NSData * _credentials;
    NSData * _ssid;
}

@property (readonly, copy) NSData *credentials;
@property (readonly, copy) NSData *ssid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)credentials;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSSID:(id)arg1 credentials:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)ssid;

@end

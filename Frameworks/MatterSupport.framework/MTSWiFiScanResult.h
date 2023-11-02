
@interface MTSWiFiScanResult : NSObject <NSCopying, NSSecureCoding> {
    unsigned char  _band;
    NSNumber * _rssi;
    unsigned char  _security;
    NSData * _ssid;
}

@property (readonly) unsigned char band;
@property (readonly) NSNumber *rssi;
@property (readonly) unsigned char security;
@property (readonly, copy) NSData *ssid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned char)band;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSSID:(id)arg1 rssi:(id)arg2 security:(unsigned char)arg3 band:(unsigned char)arg4;
- (bool)isEqual:(id)arg1;
- (id)rssi;
- (unsigned char)security;
- (id)ssid;

@end

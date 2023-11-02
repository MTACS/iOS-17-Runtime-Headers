
@interface MTSThreadScanResult : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _channel;
    NSData * _extendedAddress;
    NSNumber * _extendedPANID;
    NSNumber * _lqi;
    NSString * _networkName;
    NSNumber * _panID;
    NSNumber * _rssi;
    NSNumber * _version;
}

@property (readonly, copy) NSNumber *channel;
@property (readonly, copy) NSData *extendedAddress;
@property (readonly, copy) NSNumber *extendedPANID;
@property (readonly, copy) NSNumber *lqi;
@property (readonly, copy) NSString *networkName;
@property (readonly, copy) NSNumber *panID;
@property (readonly, copy) NSNumber *rssi;
@property (readonly, copy) NSNumber *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)channel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extendedAddress;
- (id)extendedPANID;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithNetworkName:(id)arg1 panID:(id)arg2 extendedPANID:(id)arg3 channel:(id)arg4 extendedAddress:(id)arg5 rssi:(id)arg6 version:(id)arg7 lqi:(id)arg8;
- (bool)isEqual:(id)arg1;
- (id)lqi;
- (id)networkName;
- (id)panID;
- (id)rssi;
- (id)version;

@end

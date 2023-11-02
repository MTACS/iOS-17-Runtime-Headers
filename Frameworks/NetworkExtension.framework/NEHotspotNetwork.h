
@interface NEHotspotNetwork : NSObject {
    struct __CNNetwork { } * _network;
    long long  _securityType;
}

@property (readonly) NSString *BSSID;
@property (readonly) NSString *SSID;
@property long long securityType;

+ (void)fetchCurrentWithCompletionHandler:(id /* block */)arg1;

- (id)BSSID;
- (id)SSID;
- (void)dealloc;
- (id)description;
- (bool)didAutoJoin;
- (bool)didJustJoin;
- (bool)isChosenHelper;
- (bool)isSecure;
- (long long)securityType;
- (void)setConfidence:(long long)arg1;
- (void)setPassword:(id)arg1;
- (void)setSecurityType:(long long)arg1;
- (double)signalStrength;

@end

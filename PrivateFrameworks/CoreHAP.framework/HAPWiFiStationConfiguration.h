
@interface HAPWiFiStationConfiguration : NSObject <HAPTLVProtocol, NSCopying> {
    NSData * _PSK;
    NSString * _SSID;
    HAPWiFiSecurityModeWrapper * _securityMode;
}

@property (nonatomic, retain) NSData *PSK;
@property (nonatomic, retain) NSString *SSID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HAPWiFiSecurityModeWrapper *securityMode;
@property (readonly) Class superclass;

+ (id)parsedFromData:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)PSK;
- (id)SSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (id)initWithSSID:(id)arg1 securityMode:(id)arg2 PSK:(id)arg3;
- (bool)isEqual:(id)arg1;
- (bool)parseFromData:(id)arg1 error:(id*)arg2;
- (id)securityMode;
- (id)serializeWithError:(id*)arg1;
- (void)setPSK:(id)arg1;
- (void)setSSID:(id)arg1;
- (void)setSecurityMode:(id)arg1;

@end

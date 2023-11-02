
@interface BCSWiFiConfigurationData : NSObject <BCSParsedDataPrivate> {
    bool  _WEP;
    NSString * _airplayBrokerID;
    NSString * _airplayBrokerPin;
    NSString * _captivePortalToken;
    bool  _hidden;
    NSString * _password;
    NSString * _ssid;
}

@property (getter=isWEP, nonatomic, readonly) bool WEP;
@property (nonatomic, copy) NSString *airplayBrokerID;
@property (nonatomic, copy) NSString *airplayBrokerPin;
@property (nonatomic, copy) NSString *captivePortalToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extraPreviewText;
@property (nonatomic, readonly) bool hasAirplayPayload;
@property (readonly) unsigned long long hash;
@property (getter=isHidden, nonatomic, readonly) bool hidden;
@property (nonatomic, readonly, copy) NSString *password;
@property (nonatomic, readonly, copy) NSString *ssid;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)airplayBrokerID;
- (id)airplayBrokerPin;
- (id)captivePortalToken;
- (void)encodeWithCoder:(id)arg1;
- (id)extraPreviewText;
- (bool)hasAirplayPayload;
- (id)initWithCoder:(id)arg1;
- (id)initWithSSID:(id)arg1 isWEP:(bool)arg2 password:(id)arg3 isHidden:(bool)arg4;
- (bool)isHidden;
- (bool)isWEP;
- (id)password;
- (void)setAirplayBrokerID:(id)arg1;
- (void)setAirplayBrokerPin:(id)arg1;
- (void)setCaptivePortalToken:(id)arg1;
- (id)ssid;
- (long long)type;

@end

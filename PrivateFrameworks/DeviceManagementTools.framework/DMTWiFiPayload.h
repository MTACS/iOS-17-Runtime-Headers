
@interface DMTWiFiPayload : DMTConfigurationPayloadBase <DMTConfigurationPayload> {
    NSArray * _acceptEAPTypes;
    bool  _autoJoin;
    NSArray * _certificateAnchorUUID;
    NSDictionary * _eapClientConfiguration;
    NSString * _encryptionType;
    NSString * _ssid;
}

@property (nonatomic, readonly) NSArray *acceptEAPTypes;
@property (nonatomic, readonly) bool autoJoin;
@property (nonatomic, readonly) NSArray *certificateAnchorUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) NSDictionary *eapClientConfiguration;
@property (nonatomic, readonly) NSString *encryptionType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDictionary *rawDictionary;
@property (nonatomic, readonly) NSString *ssid;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *uuid;

+ (id)supportedPayloadTypes;

- (void).cxx_destruct;
- (id)acceptEAPTypes;
- (bool)autoJoin;
- (id)certificateAnchorUUID;
- (id)eapClientConfiguration;
- (id)encryptionType;
- (id)initWithDictionary:(id)arg1 error:(id*)arg2;
- (id)ssid;

@end

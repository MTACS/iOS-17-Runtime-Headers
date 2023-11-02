
@interface WiFiAwareDatapathConfiguration : NSObject <NSSecureCoding> {
    WiFiAwareDiscoveryResult * _discoveryResult;
    WiFiAwareInternetSharingConfiguration * _internetSharingConfiguration;
    NSString * _passphrase;
    NSData * _pmk;
    NSData * _pmkID;
    WiFiAwarePublishDatapathServiceSpecificInfo * _serviceSpecificInfo;
    long long  _serviceType;
}

@property (nonatomic, readonly) WiFiAwareDiscoveryResult *discoveryResult;
@property (nonatomic, copy) WiFiAwareInternetSharingConfiguration *internetSharingConfiguration;
@property (nonatomic, readonly) NSString *passphrase;
@property (nonatomic, readonly) NSData *pmk;
@property (nonatomic, readonly) NSData *pmkID;
@property (nonatomic, copy) WiFiAwarePublishDatapathServiceSpecificInfo *serviceSpecificInfo;
@property (nonatomic, readonly) long long serviceType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)discoveryResult;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDiscoveryResult:(id)arg1 serviceType:(long long)arg2 passphrase:(id)arg3 pmk:(id)arg4 pmkID:(id)arg5 serviceSpecificInfo:(id)arg6 internetSharingConfiguration:(id)arg7;
- (id)internetSharingConfiguration;
- (bool)internetSharingEqual:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)passphrase;
- (bool)passphraseEqual:(id)arg1;
- (id)pmk;
- (bool)pmkEqual:(id)arg1;
- (id)pmkID;
- (bool)pmkIDEqual:(id)arg1;
- (id)serviceSpecificInfo;
- (bool)serviceSpecificInfoEqual:(id)arg1;
- (long long)serviceType;
- (void)setInternetSharingConfiguration:(id)arg1;
- (void)setServiceSpecificInfo:(id)arg1;

@end

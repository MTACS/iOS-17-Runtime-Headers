
@interface OspreyConnectionPreferences : NSObject {
    NSData * _certificateData;
    bool  _certificateDataFetched;
    NSString * _connectionHost;
    NSData * _deviceAttestationData;
    NSDate * _deviceAttestionExpireOn;
    NSNumber * _deviceAttestionVersion;
    NSNumber * _deviceAuthenticationVersion;
    OspreyKeychain * _keychain;
}

@property (nonatomic, retain) NSData *certificateData;
@property (nonatomic, copy) NSString *connectionHost;
@property (nonatomic, copy) NSDate *deviceAttestionExpireOn;
@property (nonatomic, copy) NSNumber *deviceAttestionVersion;
@property (nonatomic, copy) NSNumber *deviceAuthenticationVersion;
@property (nonatomic, readonly) bool isDeviceAttestionExpired;

- (void).cxx_destruct;
- (id)_certificateDataKey;
- (id)_deviceAttestationDataKey;
- (id)certificateData;
- (id)connectionHost;
- (void)deleteAll;
- (void)deleteCertificateData;
- (void)deleteDeviceAttestationData;
- (id)deviceAttestationData;
- (id)deviceAttestionExpireOn;
- (id)deviceAttestionVersion;
- (id)deviceAuthenticationVersion;
- (id)dictionaryRepresentation;
- (id)initWithConnectionHost:(id)arg1 keychain:(id)arg2;
- (id)initWithDictionary:(id)arg1 keychain:(id)arg2;
- (bool)isDeviceAttestionExpired;
- (void)resetCachedDeviceAttestation;
- (void)setCertificateData:(id)arg1;
- (void)setConnectionHost:(id)arg1;
- (bool)setDeviceAttestationData:(id)arg1 withExpiration:(id)arg2;
- (void)setDeviceAttestionExpireOn:(id)arg1;
- (void)setDeviceAttestionVersion:(id)arg1;
- (void)setDeviceAuthenticationVersion:(id)arg1;

@end

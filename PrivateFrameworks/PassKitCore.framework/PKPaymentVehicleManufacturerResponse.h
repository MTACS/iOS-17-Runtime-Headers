
@interface PKPaymentVehicleManufacturerResponse : PKPaymentWebServiceResponse {
    NSData * _encryptedData;
    NSString * _encryptionScheme;
    NSString * _ephemeralPublicKey;
    NSString * _publicKeyHash;
}

@property (nonatomic, readonly, copy) NSData *encryptedData;
@property (nonatomic, readonly, copy) NSString *encryptionScheme;
@property (nonatomic, readonly, copy) NSString *ephemeralPublicKey;
@property (nonatomic, readonly, copy) NSString *publicKeyHash;

- (void).cxx_destruct;
- (id)encryptedData;
- (id)encryptionScheme;
- (id)ephemeralPublicKey;
- (id)initWithData:(id)arg1;
- (id)initWithEncryptionScheme:(id)arg1 ephemeralPublicKey:(id)arg2 publicKeyHash:(id)arg3 encryptedData:(id)arg4;
- (id)publicKeyHash;

@end

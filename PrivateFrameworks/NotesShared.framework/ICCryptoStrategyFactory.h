
@interface ICCryptoStrategyFactory : NSObject

+ (long long)cipherVersionForObject:(id)arg1;
+ (long long)cipherVersionForPrimaryEncryptedData:(id)arg1;
+ (id)makeCryptoStrategyForObject:(id)arg1 andValidateProtocolConformance:(id)arg2;
+ (id)makeCryptoStrategyForObject:(id)arg1 withCipherMatchingEncryptedData:(id)arg2 andValidateProtocolConformance:(id)arg3;
+ (id)primaryEncryptedDataForObject:(id)arg1;
+ (bool)shouldAuthenticateWithCustomPasswordForObject:(id)arg1;
+ (bool)shouldAuthenticateWithDevicePasswordForObject:(id)arg1;
+ (id)strategyForObject:(id)arg1 cipherVersion:(long long)arg2;
+ (id)unitTest_strategyForObject:(id)arg1 cipherVersion:(long long)arg2;
+ (long long)userSelectedCipherVersionForObject:(id)arg1;

@end

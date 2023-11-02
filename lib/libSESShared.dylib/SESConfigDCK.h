
@interface SESConfigDCK : NSObject {
    SESConfig * _config;
    NSString * _mgDeviceClass;
    NSString * _mgProductVersion;
    NSDictionary * _settings;
    NSString * _vehicleBrand;
    NSData * _vehicleUUID;
}

+ (bool)evaluateCondition:(id)arg1 operator:(id)arg2 value:(id)arg3 brand:(id)arg4 uuid:(id)arg5 deviceClass:(id)arg6 productVersion:(id)arg7 error:(id*)arg8;
+ (bool)evaluateOperator:(id)arg1 valueFromDevice:(id)arg2 valueFromConfig:(id)arg3 error:(id*)arg4;
+ (id)getResolvedSettingsFrom:(id)arg1 brand:(id)arg2 uuid:(id)arg3 deviceClass:(id)arg4 productVersion:(id)arg5 error:(id*)arg6;
+ (bool)isConfigurationApplicable:(id)arg1 brand:(id)arg2 uuid:(id)arg3 deviceClass:(id)arg4 productVersion:(id)arg5 error:(id*)arg6;

- (void).cxx_destruct;
- (id)arrayValueForSetting:(unsigned long long)arg1 manufacturer:(id)arg2 brand:(id)arg3 uuid:(id)arg4 error:(id*)arg5;
- (bool)boolValueForSetting:(unsigned long long)arg1 manufacturer:(id)arg2 brand:(id)arg3 uuid:(id)arg4 error:(id*)arg5;
- (id)dictValueForSetting:(unsigned long long)arg1 manufacturer:(id)arg2 brand:(id)arg3 uuid:(id)arg4 error:(id*)arg5;
- (id)getCertificate:(id)arg1 manufacturer:(id)arg2 environment:(id)arg3 region:(id)arg4 prodSE:(id)arg5 keyID:(id)arg6 error:(id*)arg7;
- (id)getEncryptionCertificateFor:(id)arg1 environment:(id)arg2 region:(id)arg3 error:(id*)arg4;
- (id)getExternalCACertificateFor:(id)arg1 environment:(id)arg2 prodSE:(bool)arg3 error:(id*)arg4;
- (id)getRootCertificateFor:(id)arg1 keyID:(id)arg2 error:(id*)arg3;
- (id)getSettingsFor:(id)arg1 brand:(id)arg2 uuid:(id)arg3 error:(id*)arg4;
- (id)getSignatureCertificateFor:(id)arg1 environment:(id)arg2 region:(id)arg3 error:(id*)arg4;
- (id)init;
- (id)initAtPath:(id)arg1 deviceClass:(id)arg2 productVersion:(id)arg3;
- (long long)intValueForSetting:(unsigned long long)arg1 manufacturer:(id)arg2 brand:(id)arg3 uuid:(id)arg4 error:(id*)arg5;
- (bool)isDCKConfigurationAvailableFor:(id)arg1 error:(id*)arg2;

@end


@interface NFSecureElement : NSObject {
    NFHardwareSecureElementInfo * _info;
    bool  _isDirty;
}

@property (readonly) unsigned long long OSVersion;
@property (readonly) bool available;
@property (readonly) NSString *eccCertificate;
@property (readonly) NSString *eckaCertificate;
@property (readonly) unsigned long long fullOSVersion;
@property (readonly) bool isInRestrictedMode;
@property (readonly) bool isProductionSigned;
@property (readonly) NSString *rsaCertificate;
@property (readonly) NSNumber *sequenceCounter;
@property (readonly) NSString *serialNumber;
@property (readonly) unsigned int supportedTechnologies;
@property (readonly) NSString *systemOSSerialNumber;

+ (id)cachedEmbeddedSecureElementSerialNumber:(id*)arg1;
+ (id)embeddedSecureElement;
+ (id)embeddedSecureElementWithError:(id*)arg1;
+ (id)icefallSecureElement;
+ (unsigned int)supportedTechnologies;

- (void).cxx_destruct;
- (unsigned long long)OSVersion;
- (id)_initWithInfo:(id)arg1;
- (void)_markDirty;
- (void)_setIsInRestrictedMode:(bool)arg1;
- (void)_setIsInRestrictedPerformanceMode:(bool)arg1;
- (void)_updateIfDirty;
- (void)_updateSecureElementInfo:(id)arg1;
- (bool)available;
- (id)eccCertificate;
- (id)eckaCertificate;
- (unsigned long long)fullOSVersion;
- (unsigned int)hwType;
- (id)identifier;
- (id)info;
- (bool)isInRestrictedMode;
- (bool)isProductionSigned;
- (bool)isSeshatAvailabledInRestrictedMode;
- (id)manifestQueryBlob;
- (id)rsaCertificate;
- (id)sequenceCounter;
- (id)serialNumber;
- (unsigned int)supportedTechnologies;
- (id)systemOSSerialNumber;

@end

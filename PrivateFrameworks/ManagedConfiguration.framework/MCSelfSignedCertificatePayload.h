
@interface MCSelfSignedCertificatePayload : MCCertificatePayload {
    NSArray * _extendedKeyUsage;
    bool  _isHardwareBound;
    unsigned long long  _keySize;
    NSString * _keyType;
    unsigned int  _keyUsage;
    unsigned long long  _lifetime;
}

@property (nonatomic, readonly, retain) NSArray *extendedKeyUsage;
@property (nonatomic, readonly) unsigned long long keySize;
@property (nonatomic, readonly, retain) NSString *keyType;
@property (nonatomic, readonly) unsigned int keyUsage;
@property (nonatomic, readonly) unsigned long long lifetime;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)extendedKeyUsage;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)isHardwareBound;
- (bool)isIdentity;
- (bool)isRoot;
- (unsigned long long)keySize;
- (id)keyType;
- (unsigned int)keyUsage;
- (unsigned long long)lifetime;
- (id)persistentResourceID;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)validateExtendedKeyUsage:(id)arg1;
- (id)verboseDescription;

@end

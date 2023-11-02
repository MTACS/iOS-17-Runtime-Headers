
@interface MCACMEPayload : MCCertificatePayload {
    bool  _attest;
    NSString * _clientIdentifier;
    NSString * _directoryURLString;
    NSArray * _extendedKeyUsage;
    bool  _isHardwareBound;
    unsigned long long  _keySize;
    NSString * _keyType;
    NSArray * _subject;
    NSDictionary * _subjectAltName;
    unsigned int  _usageFlags;
}

@property (nonatomic, readonly) bool attest;
@property (nonatomic, readonly, retain) NSString *clientIdentifier;
@property (nonatomic, readonly, retain) NSString *directoryURLString;
@property (nonatomic, readonly, retain) NSArray *extendedKeyUsage;
@property (nonatomic, readonly) unsigned long long keySize;
@property (nonatomic, readonly, retain) NSString *keyType;
@property (nonatomic, readonly, retain) NSArray *subject;
@property (nonatomic, readonly, retain) NSDictionary *subjectAltName;
@property (nonatomic, readonly) unsigned int usageFlags;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (bool)attest;
- (id)clientIdentifier;
- (id)directoryURLString;
- (id)extendedKeyUsage;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (bool)isHardwareBound;
- (bool)isIdentity;
- (bool)isRoot;
- (unsigned long long)keySize;
- (id)keyType;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subject;
- (id)subjectAltName;
- (id)subtitle1Description;
- (unsigned int)usageFlags;
- (id)verboseDescription;

@end

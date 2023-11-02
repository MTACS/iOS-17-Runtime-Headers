
@interface NSPConfigurationSignatureInfo : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _certificates;
    NSData * _signature;
    unsigned long long  _signatureAlgorithm;
}

@property (nonatomic, retain) NSArray *certificates;
@property (nonatomic, retain) NSData *signature;
@property (nonatomic) unsigned long long signatureAlgorithm;

+ (void)removeFromPreferences;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)certificates;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromPreferences;
- (id)initWithCoder:(id)arg1;
- (bool)saveToPreferences;
- (void)setCertificates:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSignatureAlgorithm:(unsigned long long)arg1;
- (id)signature;
- (unsigned long long)signatureAlgorithm;

@end

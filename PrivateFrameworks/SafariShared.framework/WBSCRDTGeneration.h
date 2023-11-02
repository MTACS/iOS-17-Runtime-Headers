
@interface WBSCRDTGeneration : NSObject <NSCopying, NSSecureCoding> {
    NSString * _deviceIdentifier;
    unsigned long long  _generation;
}

@property (nonatomic, readonly) NSString *deviceIdentifier;
@property (nonatomic, readonly) unsigned long long generation;
@property (nonatomic, readonly) bool isValid;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)generation;
- (unsigned long long)hash;
- (id)incrementedGenerationWithDeviceIdentifier:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceIdentifier:(id)arg1 generation:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isValid;

@end

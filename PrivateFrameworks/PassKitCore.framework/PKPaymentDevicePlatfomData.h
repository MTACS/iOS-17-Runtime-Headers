
@interface PKPaymentDevicePlatfomData : NSObject <NSSecureCoding> {
    NSData * _platformData;
    NSData * _platformDataSignature;
}

@property (nonatomic, copy) NSData *platformData;
@property (nonatomic, copy) NSData *platformDataSignature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)platformData;
- (id)platformDataSignature;
- (void)setPlatformData:(id)arg1;
- (void)setPlatformDataSignature:(id)arg1;

@end

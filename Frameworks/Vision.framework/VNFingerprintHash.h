
@interface VNFingerprintHash : NSObject <NSCopying, NSSecureCoding> {
    NSData * _booleanBytesData_DO_NOT_DIRECTLY_ACCESS;
    NSData * _hashData_DO_NOT_DIRECTLY_ACCESS;
}

@property (readonly, copy) NSData *booleanBytesData;
@property (readonly, copy) NSData *hashData;
@property (readonly, copy) NSString *hashString;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)booleanBytesData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)hashData;
- (id)hashString;
- (id)initWithBooleanBytes:(const char *)arg1 length:(unsigned long long)arg2;
- (id)initWithBooleanBytesData:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHashData:(id)arg1;
- (bool)isEqual:(id)arg1;

@end

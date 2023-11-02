
@interface _VNLowResAlphaMask : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _instanceLowResMaskArray;
    bool  _isSingleMask;
}

@property (readonly) bool isSingleMask;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct __CVBuffer { }*)_alphaMaskAtIndex:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAlphaMaskArray:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSingleAlphaMask:(struct __CVBuffer { }*)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSingleMask;

@end

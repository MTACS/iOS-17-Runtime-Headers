
@interface DIAttributeSecureImage : NSObject <NSSecureCoding> {
    NSData * _flags;
    NSData * _imageData;
    NSData * _signature;
}

@property (nonatomic, copy) NSData *flags;
@property (nonatomic, copy) NSData *imageData;
@property (nonatomic, copy) NSData *signature;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)flags;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageData:(id)arg1 signature:(id)arg2 flags:(id)arg3;
- (void)setFlags:(id)arg1;
- (void)setImageData:(id)arg1;
- (void)setSignature:(id)arg1;
- (id)signature;

@end

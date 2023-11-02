
@interface _CNImageDataDonationValue : CNDonationValue {
    NSData * _imageData;
}

@property (nonatomic, readonly, copy) NSData *imageData;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)acceptDonationValueVisitor:(id)arg1;
- (id)copyWithNewExpirationDate:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageData;
- (id)initWithCoder:(id)arg1;
- (id)initWithImageData:(id)arg1 origin:(id)arg2;
- (bool)isEqual:(id)arg1;

@end
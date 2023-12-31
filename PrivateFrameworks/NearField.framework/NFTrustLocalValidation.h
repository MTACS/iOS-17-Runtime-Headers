
@interface NFTrustLocalValidation : NFTrustObject <NFTrustLocalValidation> {
    unsigned char  _primitiveLocalValidation;
}

@property (nonatomic) unsigned char primitiveLocalValidation;

+ (id)localValidationWithFaceID;
+ (id)localValidationWithPassCode;
+ (id)localValidationWithTouchID;
+ (bool)supportsSecureCoding;
+ (id)withPrimitiveLocalValidation:(unsigned char)arg1;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (unsigned char)primitiveLocalValidation;
- (void)setPrimitiveLocalValidation:(unsigned char)arg1;

@end

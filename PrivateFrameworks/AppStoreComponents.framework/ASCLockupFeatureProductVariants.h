
@interface ASCLockupFeatureProductVariants : NSObject <ASCLockupFeature> {
    NSString * _productVariantID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *productVariantID;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithProductVariantID:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)productVariantID;

@end

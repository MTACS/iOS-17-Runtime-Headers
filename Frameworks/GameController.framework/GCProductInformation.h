
@interface GCProductInformation : NSObject <GCControllerProductInfo, NSSecureCoding> {
    NSString * _anonymizedIdentifier;
    NSNumber * _attachedToDevice;
    NSString * _detailedProductCategory;
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    NSDictionary * _miscellaneous;
    NSString * _productCategory;
    NSString * _vendorName;
}

@property (nonatomic, copy) NSString *anonymizedIdentifier;
@property (getter=isAttachedToDevice, nonatomic, copy) NSNumber *attachedToDevice;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) NSString *detailedProductCategory;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, copy) NSDictionary *miscellaneous;
@property (nonatomic, copy) NSString *productCategory;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *vendorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)anonymizedIdentifier;
- (id)detailedProductCategory;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)isAttachedToDevice;
- (id)miscellaneous;
- (id)productCategory;
- (void)setAnonymizedIdentifier:(id)arg1;
- (void)setAttachedToDevice:(id)arg1;
- (void)setController:(id)arg1;
- (void)setDetailedProductCategory:(id)arg1;
- (void)setMiscellaneous:(id)arg1;
- (void)setProductCategory:(id)arg1;
- (void)setVendorName:(id)arg1;
- (id)vendorName;

@end


@interface _GCRacingWheelProductInformation : NSObject <GCRacingWheelProductInfo> {
    <NSObject><NSCopying><NSSecureCoding> * _identifier;
    NSString * _productCategory;
    NSString * _vendorName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) <NSObject><NSCopying><NSSecureCoding> *identifier;
@property (nonatomic, copy) NSString *productCategory;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *vendorName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)capture;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)productCategory;
- (void)setDevice:(id)arg1;
- (void)setProductCategory:(id)arg1;
- (void)setVendorName:(id)arg1;
- (id)vendorName;

@end


@interface MTRDeviceAttestationDeviceInfo : NSObject {
    NSNumber * _basicInformationProductID;
    NSNumber * _basicInformationVendorID;
    NSData * _certificateDeclaration;
    NSData * _dacCertificate;
    NSData * _dacPAICertificate;
    NSNumber * _productID;
    NSNumber * _vendorID;
}

@property (nonatomic, readonly) NSNumber *basicInformationProductID;
@property (nonatomic, readonly) NSNumber *basicInformationVendorID;
@property (nonatomic, readonly) NSData *certificateDeclaration;
@property (nonatomic, readonly) NSData *dacCertificate;
@property (nonatomic, readonly) NSData *dacPAICertificate;
@property (nonatomic, readonly) NSNumber *productID;
@property (nonatomic, readonly) NSNumber *vendorID;

- (void).cxx_destruct;
- (id)basicInformationProductID;
- (id)basicInformationVendorID;
- (id)certificateDeclaration;
- (id)dacCertificate;
- (id)dacPAICertificate;
- (id)initWithDACCertificate:(id)arg1 dacPAICertificate:(id)arg2 certificateDeclaration:(id)arg3 basicInformationVendorID:(id)arg4 basicInformationProductID:(id)arg5;
- (id)productID;
- (id)vendorID;

@end

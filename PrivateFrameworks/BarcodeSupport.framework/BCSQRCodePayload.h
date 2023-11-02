
@interface BCSQRCodePayload : NSObject <BCSCodePayload> {
    CIBarcodeDescriptor * _barcodeDescriptor;
}

@property (nonatomic, readonly) long long codeType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)codeType;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBarcodeDescriptor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)savePayloadInUserActivity:(id)arg1;

@end

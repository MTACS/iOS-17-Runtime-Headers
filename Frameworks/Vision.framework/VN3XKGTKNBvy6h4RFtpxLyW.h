
@interface VN3XKGTKNBvy6h4RFtpxLyW : VNObservation {
    VN6B8mkraBUpwUqskMYPtS3 * _imageSignatureHash;
    VN6Ac6Cyl5O5oK19HboyMBR * _imageSignatureprint;
}

@property (readonly) VN6B8mkraBUpwUqskMYPtS3 *imageSignatureHash;
@property (readonly) VN6Ac6Cyl5O5oK19HboyMBR *imageSignatureprint;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)imageSignatureHash;
- (id)imageSignatureprint;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginatingRequestSpecifier:(id)arg1 imageSignatureprint:(id)arg2 imageSignatureHash:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)vn_cloneObject;

@end

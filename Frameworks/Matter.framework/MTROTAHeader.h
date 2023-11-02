
@interface MTROTAHeader : NSObject {
    NSData * _imageDigest;
    unsigned long long  _imageDigestType;
    NSNumber * _maxApplicableVersion;
    NSNumber * _minApplicableVersion;
    NSNumber * _payloadSize;
    NSNumber * _productID;
    NSString * _releaseNotesURL;
    NSNumber * _softwareVersion;
    NSString * _softwareVersionString;
    NSNumber * _vendorID;
}

@property (nonatomic, copy) NSData *imageDigest;
@property (nonatomic) unsigned long long imageDigestType;
@property (nonatomic, copy) NSNumber *maxApplicableVersion;
@property (nonatomic, copy) NSNumber *minApplicableVersion;
@property (nonatomic, copy) NSNumber *payloadSize;
@property (nonatomic, copy) NSNumber *productID;
@property (nonatomic, copy) NSString *releaseNotesURL;
@property (nonatomic, copy) NSNumber *softwareVersion;
@property (nonatomic, copy) NSString *softwareVersionString;
@property (nonatomic, copy) NSNumber *vendorID;

- (void).cxx_destruct;
- (id)imageDigest;
- (unsigned long long)imageDigestType;
- (id)initWithData:(id)arg1;
- (id)maxApplicableVersion;
- (id)minApplicableVersion;
- (id)payloadSize;
- (id)productID;
- (id)releaseNotesURL;
- (void)setImageDigest:(id)arg1;
- (void)setImageDigestType:(unsigned long long)arg1;
- (void)setMaxApplicableVersion:(id)arg1;
- (void)setMinApplicableVersion:(id)arg1;
- (void)setPayloadSize:(id)arg1;
- (void)setProductID:(id)arg1;
- (void)setReleaseNotesURL:(id)arg1;
- (void)setSoftwareVersion:(id)arg1;
- (void)setSoftwareVersionString:(id)arg1;
- (void)setVendorID:(id)arg1;
- (id)softwareVersion;
- (id)softwareVersionString;
- (id)vendorID;

@end

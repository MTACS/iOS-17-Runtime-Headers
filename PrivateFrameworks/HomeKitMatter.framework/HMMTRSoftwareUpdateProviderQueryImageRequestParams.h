
@interface HMMTRSoftwareUpdateProviderQueryImageRequestParams : NSObject {
    NSNumber * _hardwareVersion;
    NSString * _location;
    NSData * _metadataForProvider;
    NSNumber * _productId;
    NSArray * _protocolsSupported;
    NSNumber * _requestorCanConsent;
    NSNumber * _softwareVersion;
    NSNumber * _vendorId;
}

@property (readonly) NSNumber *hardwareVersion;
@property (readonly) NSString *location;
@property (readonly) NSData *metadataForProvider;
@property (readonly) NSNumber *productId;
@property (readonly) NSArray *protocolsSupported;
@property (readonly) NSNumber *requestorCanConsent;
@property (readonly) NSNumber *softwareVersion;
@property (readonly) NSNumber *vendorId;

- (void).cxx_destruct;
- (id)hardwareVersion;
- (id)initWithVendorID:(id)arg1 productId:(id)arg2 softwareVersion:(id)arg3 protocolsSupported:(id)arg4 hardwareVersion:(id)arg5 location:(id)arg6 requestorCanConsent:(id)arg7 metadataForProvider:(id)arg8;
- (id)location;
- (id)metadataForProvider;
- (id)productId;
- (id)protocolsSupported;
- (id)requestorCanConsent;
- (id)softwareVersion;
- (id)vendorId;

@end

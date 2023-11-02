
@interface PKPaymentProvisioningMethodMetadataResponse : PKPaymentWebServiceResponse {
    PKPaymentProvisioningMethodMetadata * _provisioningMethodMetadata;
}

@property (nonatomic, readonly) PKPaymentProvisioningMethodMetadata *provisioningMethodMetadata;

- (void).cxx_destruct;
- (id)initWithData:(id)arg1;
- (id)provisioningMethodMetadata;

@end

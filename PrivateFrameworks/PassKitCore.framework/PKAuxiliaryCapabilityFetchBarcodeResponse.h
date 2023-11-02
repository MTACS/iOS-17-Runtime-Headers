
@interface PKAuxiliaryCapabilityFetchBarcodeResponse : PKAuxiliaryCapabilityWebServiceResponse {
    NSArray * _barcodes;
}

@property (nonatomic, readonly) NSArray *barcodes;

- (void).cxx_destruct;
- (id)barcodes;
- (id)initWithData:(id)arg1;

@end

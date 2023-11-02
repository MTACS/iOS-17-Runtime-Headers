
@interface VKRecognizedBarcode : VKRecognizedItem

@property (nonatomic, readonly) CIBarcodeDescriptor *barcodeDescriptor;
@property (nonatomic, readonly) VNBarcodeObservation *observation;
@property (nonatomic, readonly) NSString *payloadStringValue;
@property (nonatomic, readonly) NSString *symbology;

- (id)barcodeDescriptor;
- (id)description;
- (id)initWithFrameInfo:(id)arg1 barcodeObservation:(id)arg2;
- (id)observation;
- (id)payloadStringValue;
- (id)symbology;

@end

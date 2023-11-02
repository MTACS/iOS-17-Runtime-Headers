
@interface HKMedicationsBarcodeNDCParser : NSObject

+ (id)_barcodeObservationsFrom:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
+ (id)_convertNDCFromGTIN14Code:(id)arg1;
+ (bool)_isGTIN14CodeValid:(id)arg1;
+ (id)_parsedGTIN14FromDataMatrix:(id)arg1;
+ (id)_parsedGTIN14FromDataMatrixPayload:(id)arg1;
+ (id)_parsedGTIN14FromEAN13:(id)arg1;
+ (id)_parsedGTIN14FromEAN13Payload:(id)arg1;
+ (id)_parsedNDCFromEAN13:(id)arg1;
+ (id)hkt_convertGTIN14ToNDCCode:(id)arg1;
+ (id)hkt_parsedGTIN14FromDataMatrixPayload:(id)arg1;
+ (id)hkt_parsedGTIN14FromEAN13Payload:(id)arg1;
+ (id)hkt_parsedNDCFromDataMatrixPayload:(id)arg1;
+ (id)hkt_parsedNDCFromEAN13Payload:(id)arg1;
+ (bool)isObservationSupported:(id)arg1;
+ (id)parsedGTIN14CodeFromBarcodeObservation:(id)arg1;
+ (id)parsedGTIN14CodesFromCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
+ (id)parsedNDCCodeFromBarcodeObservation:(id)arg1;
+ (id)parsedNDCCodesFromCMSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 error:(id*)arg2;
+ (id)parsedNDCFromDataMatrix:(id)arg1;

@end

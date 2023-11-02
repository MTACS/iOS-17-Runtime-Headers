
@interface BCSDetectedCode : NSObject {
    AVMetadataMachineReadableCodeObject * _mrcObject;
    VNBarcodeObservation * _observation;
}

@property (nonatomic, readonly) AVMetadataMachineReadableCodeObject *mrcObject;
@property (nonatomic, readonly) VNBarcodeObservation *observation;

+ (id)detectedCodeWithBarcodeObservation:(id)arg1;
+ (id)detectedCodeWithMachineReadableObject:(id)arg1;

- (void).cxx_destruct;
- (bool)isLikelyEqualToCode:(id)arg1;
- (id)mrcObject;
- (id)observation;
- (void)parseCodeWithCompletion:(id /* block */)arg1;

@end

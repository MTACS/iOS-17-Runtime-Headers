
@interface VNDataDetectorResult : NSObject {
    BCSDetectedCode * _detectedBarcodeSupportCode;
    VNObservation * _originalObservation;
    DDScannerResult * _scannerResult;
    NSString * _shortDescription;
    unsigned long long  _type;
    NSString * _value;
}

@property (nonatomic, retain) BCSDetectedCode *detectedBarcodeSupportCode;
@property (nonatomic, retain) VNObservation *originalObservation;
@property (nonatomic, retain) DDScannerResult *scannerResult;
@property (nonatomic, retain) NSString *shortDescription;
@property (nonatomic) unsigned long long type;
@property (nonatomic, retain) NSString *value;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)detectedBarcodeSupportCode;
- (id)initWithBCSDetectedCode:(id)arg1 description:(id)arg2 observation:(id)arg3;
- (id)initWithDDScannerResult:(id)arg1 observation:(id)arg2;
- (id)originalObservation;
- (id)scannerResult;
- (void)setDetectedBarcodeSupportCode:(id)arg1;
- (void)setOriginalObservation:(id)arg1;
- (void)setScannerResult:(id)arg1;
- (void)setShortDescription:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (void)setValue:(id)arg1;
- (id)shortDescription;
- (unsigned long long)type;
- (id)value;

@end

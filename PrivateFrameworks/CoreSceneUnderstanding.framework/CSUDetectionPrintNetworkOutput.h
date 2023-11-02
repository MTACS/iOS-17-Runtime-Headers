
@interface CSUDetectionPrintNetworkOutput : NSObject {
    NSDictionary * _detectionPrintPerTapPoint;
}

@property (nonatomic, readonly, copy) NSArray *availableTapPointNames;
@property (nonatomic, readonly, copy) NSDictionary *detectionPrintPerTapPoint;

- (void).cxx_destruct;
- (id)availableTapPointNames;
- (id)detectionPrintFeatureForTapPointName:(id)arg1 error:(id*)arg2;
- (id)detectionPrintPerTapPoint;
- (id)initWithDetectionPrintPerTapPoint:(id)arg1;

@end

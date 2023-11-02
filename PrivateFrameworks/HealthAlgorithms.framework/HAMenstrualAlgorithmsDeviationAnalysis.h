
@interface HAMenstrualAlgorithmsDeviationAnalysis : NSObject <NSSecureCoding> {
    HAMenstrualAlgorithmsDeviation * _infrequentBleeding;
    HAMenstrualAlgorithmsDeviation * _irregularBleeding;
    HAMenstrualAlgorithmsDeviation * _prolongedBleeding;
    HAMenstrualAlgorithmsDeviation * _spotting;
}

@property (nonatomic, retain) HAMenstrualAlgorithmsDeviation *infrequentBleeding;
@property (nonatomic, retain) HAMenstrualAlgorithmsDeviation *irregularBleeding;
@property (nonatomic, retain) HAMenstrualAlgorithmsDeviation *prolongedBleeding;
@property (nonatomic, retain) HAMenstrualAlgorithmsDeviation *spotting;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)infrequentBleeding;
- (id)initWithCoder:(id)arg1;
- (id)irregularBleeding;
- (id)prolongedBleeding;
- (void)setInfrequentBleeding:(id)arg1;
- (void)setIrregularBleeding:(id)arg1;
- (void)setProlongedBleeding:(id)arg1;
- (void)setSpotting:(id)arg1;
- (id)spotting;

@end

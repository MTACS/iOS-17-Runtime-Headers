
@interface PUCurationTraitContainer : NSObject {
    NSString * _actionLabel;
    double  _highPrecisionOperatingPoint;
    double  _highRecallOperatingPoint;
    double  _operatingPoint;
    short  _value;
}

@property (nonatomic, readonly) NSString *actionLabel;
@property (nonatomic, readonly) double highPrecisionOperatingPoint;
@property (nonatomic, readonly) double highRecallOperatingPoint;
@property (nonatomic, readonly) double operatingPoint;
@property (nonatomic, readonly) short value;

- (void).cxx_destruct;
- (id)actionLabel;
- (double)highPrecisionOperatingPoint;
- (double)highRecallOperatingPoint;
- (id)initWithLabel:(id)arg1 traitValue:(short)arg2 highPrecision:(double)arg3 operatingPoint:(double)arg4 highRecall:(double)arg5;
- (double)operatingPoint;
- (short)value;

@end

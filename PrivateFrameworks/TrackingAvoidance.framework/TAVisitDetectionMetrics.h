
@interface TAVisitDetectionMetrics : NSObject <NSSecureCoding> {
    double  _distanceToPreviousVisit;
    unsigned long long  _nSigmaBetweenVisits;
    double  _residualDistanceToPreviousVisit;
}

@property (nonatomic, readonly) double distanceToPreviousVisit;
@property (nonatomic, readonly) unsigned long long nSigmaBetweenVisits;
@property (nonatomic, readonly) double residualDistanceToPreviousVisit;

+ (bool)supportsSecureCoding;

- (double)distanceToPreviousVisit;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDistance:(double)arg1 residualDistance:(double)arg2 nSigma:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)nSigmaBetweenVisits;
- (double)residualDistanceToPreviousVisit;

@end

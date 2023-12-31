
@interface PXInitialHysteresisNumberFilter : PXNumberFilter {
    bool  _didReachThreshold;
    double  _hysteresis;
    double  _offset;
}

@property (nonatomic) double hysteresis;
@property (nonatomic, readonly) double outputDerivative;

- (double)hysteresis;
- (double)outputDerivative;
- (void)setHysteresis:(double)arg1;
- (double)updatedOutput;

@end

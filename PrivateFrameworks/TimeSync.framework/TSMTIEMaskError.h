
@interface TSMTIEMaskError : NSObject {
    double  _mask;
    double  _mtie;
    double  _observationInterval;
}

@property (nonatomic) double mask;
@property (nonatomic) double mtie;
@property (nonatomic) double observationInterval;

- (id)description;
- (double)mask;
- (double)mtie;
- (double)observationInterval;
- (void)setMask:(double)arg1;
- (void)setMtie:(double)arg1;
- (void)setObservationInterval:(double)arg1;

@end

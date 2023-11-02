
@interface AMSFailingMockBagBuilder : AMSMockBagBuilder {
    double  _delay;
    NSError * _error;
}

@property (nonatomic) double delay;
@property (nonatomic, retain) NSError *error;

- (void).cxx_destruct;
- (id)createMockBag;
- (double)delay;
- (id)error;
- (void)setDelay:(double)arg1;
- (void)setError:(id)arg1;

@end

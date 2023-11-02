
@interface MTTreatmentContext : NSObject {
    NSDictionary * _metrics;
    MTTreatment * _treatment;
}

@property (nonatomic, retain) NSDictionary *metrics;
@property (nonatomic, retain) MTTreatment *treatment;

- (void).cxx_destruct;
- (id)initWithTreatment:(id)arg1 metrics:(id)arg2;
- (id)metrics;
- (void)setMetrics:(id)arg1;
- (void)setTreatment:(id)arg1;
- (id)treatment;

@end

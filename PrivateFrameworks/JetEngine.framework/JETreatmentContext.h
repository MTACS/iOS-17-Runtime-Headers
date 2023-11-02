
@interface JETreatmentContext : NSObject {
    NSDictionary * _metrics;
    JETreatment * _treatment;
}

- (void).cxx_destruct;
- (id)initWithTreatment:(id)arg1 metrics:(id)arg2;

@end

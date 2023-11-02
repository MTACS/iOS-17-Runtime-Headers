
@interface JEDeresNumberTreatmentAction : JETreatmentAction {
    NSArray * _buckets;
    double  _precision;
}

- (void).cxx_destruct;
- (id)initWithField:(id)arg1 configuration:(id)arg2;
- (id)performAction:(id)arg1 context:(id)arg2;

@end

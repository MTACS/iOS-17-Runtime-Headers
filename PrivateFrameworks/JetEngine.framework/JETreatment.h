
@interface JETreatment : NSObject {
    JETreatmentAction * _eventAction;
    NSDictionary * _fieldActions;
    JEMetricsDataPredicate * _predicate;
}

+ (id)treatmentWithConfiguration:(id)arg1 topic:(id)arg2;

- (void).cxx_destruct;
- (id)initWithConfigDictionary:(id)arg1 topic:(id)arg2;
- (id)performTreatment:(id)arg1;

@end

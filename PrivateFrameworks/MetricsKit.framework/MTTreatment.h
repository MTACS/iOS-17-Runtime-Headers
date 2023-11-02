
@interface MTTreatment : NSObject {
    MTTreatmentAction * _eventAction;
    NSDictionary * _fieldActions;
    MTMetricsDataPredicate * _predicate;
}

@property (nonatomic, retain) MTTreatmentAction *eventAction;
@property (nonatomic, retain) NSDictionary *fieldActions;
@property (nonatomic, retain) MTMetricsDataPredicate *predicate;

+ (id)treatmentWithConfigData:(id)arg1;

- (void).cxx_destruct;
- (id)eventAction;
- (id)fieldActions;
- (id)initWithConfigDictionary:(id)arg1;
- (id)performTreatment:(id)arg1;
- (id)predicate;
- (void)setEventAction:(id)arg1;
- (void)setFieldActions:(id)arg1;
- (void)setPredicate:(id)arg1;

@end


@interface JEMetricsDataPredicate : NSObject {
    NSDictionary * _fieldPredicates;
}

+ (id)predicateWithConfiguration:(id)arg1;
+ (id)predicateWithType:(id)arg1 argument:(id)arg2;

- (void).cxx_destruct;
- (bool)evaluateWithMetricsData:(id)arg1;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithFormat:(id)arg1;

@end


@interface MTMetricsDataPredicate : NSObject {
    NSDictionary * _fieldPredicates;
}

@property (nonatomic, retain) NSDictionary *fieldPredicates;

+ (id)predicateWithConfigData:(id)arg1;
+ (id)predicateWithType:(id)arg1 argument:(id)arg2;

- (void).cxx_destruct;
- (bool)evaluateWithMetricsData:(id)arg1;
- (id)fieldPredicates;
- (id)initWithConfigDictionary:(id)arg1;
- (id)initWithFormat:(id)arg1;
- (void)setFieldPredicates:(id)arg1;

@end

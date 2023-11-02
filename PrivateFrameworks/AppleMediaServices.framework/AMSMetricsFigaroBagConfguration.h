
@interface AMSMetricsFigaroBagConfguration : NSObject {
    AMSMetricsFigaroEventModifier * _defaultModifier;
    NSDictionary * _metricsDictionary;
    NSArray * _overrides;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) AMSMetricsFigaroEventModifier *defaultModifier;
@property (nonatomic, readonly) NSDictionary *metricsDictionary;
@property (nonatomic, readonly) NSArray *overrides;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

+ (id)configurationPromiseWithBag:(id)arg1;

- (void).cxx_destruct;
- (id)_generateModifiersIfNeeded;
- (id)defaultModifier;
- (id)initWithMetricsDictionary:(id)arg1;
- (id)metricsDictionary;
- (id)modifierForEvent:(id)arg1;
- (id)overrides;
- (void)prepareForFlush;
- (id)queue;

@end

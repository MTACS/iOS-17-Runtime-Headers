
@interface AMSUIDynamicImpressionMetrics : NSObject {
    NSDictionary * _custom;
    NSDictionary * _fields;
    AMSUIDynamicImpressionMetricsIdentifier * _identifier;
}

@property (nonatomic, retain) NSDictionary *custom;
@property (nonatomic, retain) NSDictionary *fields;
@property (nonatomic, retain) AMSUIDynamicImpressionMetricsIdentifier *identifier;

- (void).cxx_destruct;
- (id)custom;
- (id)fields;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 fields:(id)arg2 custom:(id)arg3;
- (void)setCustom:(id)arg1;
- (void)setFields:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end

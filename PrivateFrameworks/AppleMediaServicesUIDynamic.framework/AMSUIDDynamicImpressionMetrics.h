
@interface AMSUIDDynamicImpressionMetrics : NSObject {
    void custom;
    void fields;
    void identifier;
}

@property (nonatomic, copy) NSDictionary *custom;
@property (nonatomic, copy) NSDictionary *fields;
@property (nonatomic, retain) AMSUIDDynamicImpressionMetricsIdentifier *identifier;

- (void).cxx_destruct;
- (id)custom;
- (id)fields;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 fields:(id)arg2 custom:(id)arg3;
- (void)setCustom:(id)arg1;
- (void)setFields:(id)arg1;
- (void)setIdentifier:(id)arg1;

@end

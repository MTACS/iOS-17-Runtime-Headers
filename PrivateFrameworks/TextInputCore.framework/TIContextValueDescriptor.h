
@interface TIContextValueDescriptor : TIMetricDescriptor {
    NSString * _contextFieldName;
}

@property (retain) NSString *contextFieldName;

+ (id)contextValueDescriptorWithMetricName:(id)arg1 contextFieldName:(id)arg2;

- (void).cxx_destruct;
- (id)contextFieldName;
- (id)initWithMetricName:(id)arg1 contextFieldName:(id)arg2;
- (void)setContextFieldName:(id)arg1;

@end

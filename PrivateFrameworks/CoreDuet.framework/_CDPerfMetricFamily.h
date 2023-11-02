
@interface _CDPerfMetricFamily : NSObject {
    NSString * _name;
    NSMutableDictionary * _perfMetrics;
}

@property (readonly) NSString *name;
@property (readonly) NSMutableDictionary *perfMetrics;

+ (id)perfMetricFamilyWithName:(id)arg1;

- (void).cxx_destruct;
- (id)allPerfMetrics;
- (id)description;
- (id)initWithName:(id)arg1;
- (id)name;
- (id)perfMetricWithName:(id)arg1;
- (id)perfMetricWithName:(id)arg1 string:(id)arg2;
- (id)perfMetrics;

@end

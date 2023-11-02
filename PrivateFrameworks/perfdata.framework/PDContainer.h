
@interface PDContainer : NSObject {
    NSDictionary * _configuration;
    NSMutableDictionary * _extensions;
    NSString * _generator;
    NSDictionary * _labels;
    bool  _largerBetter;
    NSString * _name;
    NSString * _notes;
    NSMutableDictionary * _perfdata;
    NSString * _primaryMetricFilter;
    NSString * _testDescription;
    NSDictionary * _variables;
    unsigned long long  _version;
}

@property (nonatomic, retain) NSDictionary *configuration;
@property (nonatomic, retain) NSMutableDictionary *extensions;
@property (nonatomic, retain) NSString *generator;
@property (nonatomic, retain) NSDictionary *labels;
@property (nonatomic) bool largerBetter;
@property (nonatomic, readonly) unsigned long long measurementCount;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSString *notes;
@property (nonatomic, retain) NSMutableDictionary *perfdata;
@property (nonatomic, retain) NSString *primaryMetricFilter;
@property (nonatomic, retain) NSString *testDescription;
@property (nonatomic, retain) NSDictionary *variables;
@property (nonatomic) unsigned long long version;

+ (id)containerWithFileURL:(id)arg1 error:(id*)arg2;
+ (id)containerWithJSONData:(id)arg1 error:(id*)arg2;
+ (id)containerWithJSONDictionary:(id)arg1 error:(id*)arg2;
+ (id)containerWithPath:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (id)aggregateMeasurementsMatchingFilter:(id)arg1 error:(id*)arg2;
- (id)configuration;
- (id)description;
- (bool)enumerateAggregatedMeasurementsIgnoringVariables:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateAggregatedMeasurementsMatchingFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateAggregatedMeasurementsMatchingNullableFilter:(id)arg1 ignoringVariables:(id)arg2 error:(id*)arg3 usingBlock:(id /* block */)arg4;
- (bool)enumerateMeasurementsMatchingFilter:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateMeasurementsMatchingNullableFilter:(id)arg1 error:(id*)arg2 usingBlock:(id /* block */)arg3;
- (bool)enumerateMeasurementsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)extensions;
- (id)generator;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (id)initWithJSONData:(id)arg1 error:(id*)arg2;
- (id)initWithJSONDictionary:(id)arg1 error:(id*)arg2;
- (id)initWithPath:(id)arg1 error:(id*)arg2;
- (bool)isComparableTo:(id)arg1;
- (bool)isLike:(id)arg1;
- (id)labels;
- (bool)largerBetter;
- (unsigned long long)measurementCount;
- (id)name;
- (id)notes;
- (id)perfdata;
- (id)primaryMetricFilter;
- (void)setConfiguration:(id)arg1;
- (void)setExtensions:(id)arg1;
- (void)setGenerator:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setLargerBetter:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setNotes:(id)arg1;
- (void)setPerfdata:(id)arg1;
- (void)setPrimaryMetricFilter:(id)arg1;
- (void)setTestDescription:(id)arg1;
- (void)setVariables:(id)arg1;
- (void)setVersion:(unsigned long long)arg1;
- (id)testDescription;
- (id)variables;
- (unsigned long long)version;

@end


@interface PDAggregateMeasurement : NSObject {
    PDContainer * _container;
    NSMutableDictionary * _labels;
    double  _max;
    NSString * _metric;
    double  _min;
    unsigned long long  _samples;
    struct pooled_mean { struct sum { double x_1_1_1; double x_1_1_2; } x1; struct sum { double x_2_1_1; double x_2_1_2; } x2; unsigned long long x3; unsigned long long x4; } * _stats_mean;
    NSString * _unitString;
    bool  _validMax;
    bool  _validMin;
    struct running_mean { double x1; double x2; unsigned long long x3; } * _values_mean;
    NSMutableDictionary * _variables;
}

@property (nonatomic, retain) PDContainer *container;
@property (nonatomic, retain) NSMutableDictionary *labels;
@property (nonatomic) double max;
@property (nonatomic, readonly) PDMeasurement *measurement;
@property (nonatomic, retain) NSString *metric;
@property (nonatomic) double min;
@property (nonatomic) unsigned long long samples;
@property (nonatomic) struct pooled_mean { struct sum { double x_1_1_1; double x_1_1_2; } x1; struct sum { double x_2_1_1; double x_2_1_2; } x2; unsigned long long x3; unsigned long long x4; }*stats_mean;
@property (nonatomic, retain) NSString *unitString;
@property (nonatomic) bool validMax;
@property (nonatomic) bool validMin;
@property (nonatomic) struct running_mean { double x1; double x2; unsigned long long x3; }*values_mean;
@property (nonatomic, retain) NSMutableDictionary *variables;

- (void).cxx_destruct;
- (id)container;
- (void)dealloc;
- (id)initWithContainer:(id)arg1 metric:(id)arg2 unitString:(id)arg3;
- (id)labels;
- (double)max;
- (id)measurement;
- (id)metric;
- (double)min;
- (unsigned long long)samples;
- (void)setContainer:(id)arg1;
- (void)setLabels:(id)arg1;
- (void)setMax:(double)arg1;
- (void)setMetric:(id)arg1;
- (void)setMin:(double)arg1;
- (void)setSamples:(unsigned long long)arg1;
- (void)setStats_mean:(struct pooled_mean { struct sum { double x_1_1_1; double x_1_1_2; } x1; struct sum { double x_2_1_1; double x_2_1_2; } x2; unsigned long long x3; unsigned long long x4; }*)arg1;
- (void)setUnitString:(id)arg1;
- (void)setValidMax:(bool)arg1;
- (void)setValidMin:(bool)arg1;
- (void)setValues_mean:(struct running_mean { double x1; double x2; unsigned long long x3; }*)arg1;
- (void)setVariables:(id)arg1;
- (struct pooled_mean { struct sum { double x_1_1_1; double x_1_1_2; } x1; struct sum { double x_2_1_1; double x_2_1_2; } x2; unsigned long long x3; unsigned long long x4; }*)stats_mean;
- (id)unitString;
- (void)updateWithMeasurement:(id)arg1;
- (bool)validMax;
- (bool)validMin;
- (struct running_mean { double x1; double x2; unsigned long long x3; }*)values_mean;
- (id)variables;

@end


@interface TISKMetricDefinition : NSObject {
    bool  _isPointMetric;
    struct { double x1; } * _metricDefinition;
    NSString * _metricName;
    int  _metricType;
    unsigned long long  _positionalSize;
}

@property (nonatomic, readonly) bool isPointMetric;
@property (nonatomic, readonly) struct { double x1; }*metricDefinition;
@property (nonatomic, readonly) NSString *metricName;
@property (nonatomic, readonly) int metricType;
@property (nonatomic, readonly) unsigned long long positionalSize;

+ (id)_makeMetric:(id)arg1 type:(int)arg2;
+ (id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(struct { double x1; }*)arg3;
+ (id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(struct { double x1; }*)arg3 isPointMetric:(bool)arg4;
+ (id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(struct { double x1; }*)arg3 size:(unsigned long long)arg4;
+ (id)_makeMetric:(id)arg1 type:(int)arg2 metricDef:(struct { double x1; }*)arg3 size:(unsigned long long)arg4 isPointMetric:(bool)arg5;
+ (id)metricDefinitions;
+ (double)pointsToMM:(double)arg1;

- (void).cxx_destruct;
- (id)init:(id)arg1 type:(int)arg2 metricDef:(struct { double x1; }*)arg3 size:(unsigned long long)arg4 isPointMetric:(bool)arg5;
- (bool)isPointMetric;
- (struct { double x1; }*)metricDefinition;
- (id)metricName;
- (int)metricType;
- (unsigned long long)positionalSize;

@end


@interface CHBSeries : NSObject

+ (Class)chdSeriesClassWithState:(id)arg1;
+ (id)chdSeriesWithState:(id)arg1;
+ (id)readFrom:(void*)arg1 state:(id)arg2;
+ (void)readXlChartSeriesFormat:(void*)arg1 chdSeries:(id)arg2 state:(id)arg3;
+ (void)resolveSeriesStyle:(id)arg1 state:(id)arg2;

@end

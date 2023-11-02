
@interface IMMetrics : NSObject

+ (void)addMetricsController:(id)arg1;
+ (bool)canRecordEvent;
+ (void)cancelFlush;
+ (id)defaultMetricsController;
+ (void)disable;
+ (void)enable;
+ (double)endTimer:(id)arg1;
+ (double)endTimer:(id)arg1 dataSource:(id)arg2;
+ (double)endTimer:(id)arg1 dataSource:(id)arg2 withData:(id)arg3;
+ (id)flushImmediately;
+ (void)initialize;
+ (id)keyForTimerName:(id)arg1 dataSource:(id)arg2;
+ (id)metricsControllerForTopic:(id)arg1;
+ (void)recordEvent:(id)arg1;
+ (void)recordEvent:(id)arg1 dataSource:(id)arg2 data:(id)arg3;
+ (void)recordEvent:(id)arg1 dataSource:(id)arg2 data:(id)arg3 topic:(id)arg4;
+ (void)recordEvent:(id)arg1 topic:(id)arg2;
+ (void)recordEvent:(id)arg1 with:(id)arg2;
+ (void)recordMemory:(id)arg1;
+ (void)recordUserAction:(id)arg1;
+ (void)recordUserAction:(id)arg1 dataSource:(id)arg2;
+ (void)recordUserAction:(id)arg1 dataSource:(id)arg2 withData:(id)arg3;
+ (void)removeMetricsController:(id)arg1;
+ (void)setDefaultMetricsController:(id)arg1;
+ (void)setLogLevel:(int)arg1;
+ (void)setupEvent:(id)arg1 forDataSource:(id)arg2;
+ (void)startTimer:(id)arg1;
+ (void)startTimer:(id)arg1 dataSource:(id)arg2;

@end

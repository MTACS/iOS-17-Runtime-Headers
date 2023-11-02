
@interface AMDPerf : NSObject

+ (void)enable:(bool)arg1;
+ (void)endMonitoringEvent:(id)arg1;
+ (id)generatePerformanceDict;
+ (id)getContainer;
+ (void)log:(id)arg1 atLevel:(int)arg2;
+ (void)provision;
+ (void)sampleForKey:(id)arg1;
+ (void)setVerbosity:(BOOL)arg1;
+ (void)startMonitoringEvent:(id)arg1;

@end

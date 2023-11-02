
@interface ATXUnifiedInferredActivityBiomeInspector : NSObject

+ (id)inferredActivityStreamFromName:(id)arg1;
+ (void)retrieveInferredActivitySessionsFromPublisherName:(id)arg1 startTime:(double)arg2 reply:(id /* block */)arg3;
+ (void)retrieveInferredActivityTransitionsFromPublisherName:(id)arg1 startTime:(double)arg2 reply:(id /* block */)arg3;

@end

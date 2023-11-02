
@interface AMDJSSync : NSObject

+ (id)dailyDataUpdate:(id)arg1 forStoreFrontId:(unsigned int)arg2 error:(id*)arg3;
+ (id)runSync:(id)arg1 withCallUUID:(id)arg2 error:(id*)arg3;
+ (void)updateArcadeUsageFeature:(id*)arg1;

@end

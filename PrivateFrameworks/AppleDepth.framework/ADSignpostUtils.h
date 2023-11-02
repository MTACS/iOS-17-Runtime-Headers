
@interface ADSignpostUtils : NSObject

+ (void)markEndFrame:(bool)arg1 name:(id)arg2 mappingId:(unsigned long long)arg3;
+ (void)markEndMeasurement;
+ (void)markStartFrame:(id)arg1 mappingId:(unsigned long long)arg2;
+ (void)markStartMeasurement;

@end

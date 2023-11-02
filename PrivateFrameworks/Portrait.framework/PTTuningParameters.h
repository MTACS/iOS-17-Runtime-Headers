
@interface PTTuningParameters : NSObject

+ (int)hwModelIDFromFigModelSpecificName:(id)arg1;
+ (id)hwModelIDToString:(int)arg1;
+ (float)noiseScaleFactorForHwModelID:(int)arg1 sensorID:(int)arg2;

@end

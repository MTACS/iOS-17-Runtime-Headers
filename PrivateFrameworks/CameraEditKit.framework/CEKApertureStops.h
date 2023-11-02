
@interface CEKApertureStops : NSObject

+ (id)closestValidValueForAperture:(double)arg1;
+ (unsigned long long)firstFullStopIndexAfterOrIncludingIndex:(unsigned long long)arg1;
+ (unsigned long long)indexOfClosestValidValueForAperture:(double)arg1;
+ (bool)isValidApertureIndex:(unsigned long long)arg1;
+ (bool)isValidApertureIndexFullStop:(unsigned long long)arg1;
+ (id)validApertureValues;

@end

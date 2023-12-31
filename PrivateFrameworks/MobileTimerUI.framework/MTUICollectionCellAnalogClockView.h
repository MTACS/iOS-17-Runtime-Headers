
@interface MTUICollectionCellAnalogClockView : MTUIAnalogClockView

+ (double)faceRadius;
+ (struct CGPoint { double x1; double x2; })handRotationalCenterForHand:(long long)arg1;
+ (double)hourHandLength;
+ (double)hourHandWidth;
+ (id)makeClockFaceForDaytime:(bool)arg1;
+ (double)minuteHandLength;
+ (double)minuteHandWidth;
+ (double)overHourHandDotSize;
+ (double)overSecondHandDotSize;
+ (double)secondHandMainLength;
+ (double)secondHandOverhangLength;
+ (double)secondHandWidth;
+ (bool)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(bool)arg2;
+ (long long)style;

- (double)coarseUpdateInterval;
- (double)updateInterval;

@end

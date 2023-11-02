
@interface NTKAnalogUtilities : NSObject

+ (double)dialDiameterForDevice:(id)arg1;
+ (double)dialDiameterForDevice:(id)arg1 withRounding:(unsigned long long)arg2;
+ (struct CGSize { double x1; double x2; })dialSizeForDevice:(id)arg1;
+ (double)largeDialDiameterForDevice:(id)arg1;
+ (struct CGSize { double x1; double x2; })largeDialSizeForDevice:(id)arg1;
+ (struct CGSize { double x1; double x2; })sceneSizeForDevice:(id)arg1;
+ (double)whistlerMediumDialDiameterForDevice:(id)arg1;

@end

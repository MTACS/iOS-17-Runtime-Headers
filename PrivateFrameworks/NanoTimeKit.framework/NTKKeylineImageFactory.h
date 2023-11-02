
@interface NTKKeylineImageFactory : NSObject

+ (id)_cornerKeylineWithDevice:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 innerCircleRadius:(double)arg3 strokeWidth:(double)arg4 filled:(bool)arg5;
+ (id)_heartKeylineWithDevice:(id)arg1 outerRadius:(double)arg2 innerRadius:(double)arg3 sideCircleRadius:(double)arg4 topCircleRadius:(double)arg5 strokeWidth:(double)arg6 filled:(bool)arg7;
+ (id)_smileKeylineWithDevice:(id)arg1 outerRadius:(double)arg2 innerRadius:(double)arg3 angle:(double)arg4 strokeWidth:(double)arg5 filled:(bool)arg6;
+ (id)cornerKeylineWithDevice:(id)arg1 corner:(unsigned long long)arg2 size:(struct CGSize { double x1; double x2; })arg3 innerCircleRadius:(double)arg4 strokeWidth:(double)arg5 filled:(bool)arg6;
+ (id)heartKeylineWithDevice:(id)arg1 outerRadius:(double)arg2 innerRadius:(double)arg3 sideCircleRadius:(double)arg4 topCircleRadius:(double)arg5 strokeWidth:(double)arg6 filled:(bool)arg7;
+ (id)heartKeylineWithDevice:(id)arg1 outerRadius:(double)arg2 innerRadius:(double)arg3 sideComplicationDistance:(double)arg4 topComplicationDistance:(double)arg5 strokeWidth:(double)arg6 filled:(bool)arg7;
+ (id)smileKeylineWithDevice:(id)arg1 outerRadius:(double)arg2 innerRadius:(double)arg3 angle:(double)arg4 strokeWidth:(double)arg5 filled:(bool)arg6;
+ (id)smileShapeWithDevice:(id)arg1 outerRadius:(double)arg2 innerRadius:(double)arg3 angle:(double)arg4 strokeWidth:(double)arg5 filled:(bool)arg6;
+ (id)topLeftCornerShapeWithDevice:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2 innerCircleRadius:(double)arg3 strokeWidth:(double)arg4 filled:(bool)arg5;

@end

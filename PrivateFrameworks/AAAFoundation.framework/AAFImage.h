
@interface AAFImage : NSObject

+ (struct CGImage { }*)circularImage:(struct CGImage { }*)arg1 withDiameter:(double)arg2 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (id)circularImageData:(id)arg1 withDiameter:(double)arg2;
+ (id)circularImageData:(id)arg1 withDiameter:(double)arg2 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })tranformedRectForImageSize:(struct CGSize { double x1; double x2; })arg1 withDiameter:(double)arg2 crop:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;

@end

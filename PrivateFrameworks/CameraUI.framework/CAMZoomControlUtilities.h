
@interface CAMZoomControlUtilities : NSObject

+ (double)_baseSingleCameraDeviceForDevice:(long long)arg1;
+ (double)_zoomControlRadiusForZoomControl:(id)arg1 layoutSide:(long long)arg2 layoutStyle:(long long)arg3 width:(double)arg4 centerOfZoomControlInContainerBounds:(struct CGPoint { double x1; double x2; })arg5 marginForZoomDiaFromEdge:(double)arg6;
+ (double)appropriateSignificantZoomFactorForDevice:(long long)arg1 fromDevice:(long long)arg2 currentZoomFactor:(double)arg3 targetZoomFactor:(double)arg4 mode:(long long)arg5;
+ (long long)deviceForEmulatingZoomFactor:(double)arg1 fromDevice:(long long)arg2 mode:(long long)arg3 continuousZoomSupported:(bool)arg4;
+ (double)equivalentZoomFactor:(double)arg1 forDevice:(long long)arg2 fromDevice:(long long)arg3;
+ (void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBar:(id)arg3 previewView:(id)arg4;
+ (void)layoutZoomControl:(id)arg1 forLayoutStyle:(long long)arg2 bottomBarAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 bottomBarTransparent:(bool)arg4 shutterButtonAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5 previewViewAlignmentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg6;
+ (void)layoutZoomControl:(id)arg1 layoutSide:(long long)arg2 forLayoutStyle:(long long)arg3 width:(double)arg4 marginForZoomButtonFromEdge:(double)arg5 marginForZoomDialFromEdge:(double)arg6 zoomDialContentMaskingHeight:(double)arg7 centerOfZoomControlInContainerView:(struct CGPoint { double x1; double x2; })arg8;
+ (double)linearMappingForX:(double)arg1 x1:(double)arg2 y1:(double)arg3 x2:(double)arg4 y2:(double)arg5 clamp:(bool)arg6;
+ (double)piecewiseLinearMappingForX:(double)arg1 fromXValues:(id)arg2 toYValues:(id)arg3;
+ (bool)shouldApplyContinuousZoomForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 videoStabilizationStrength:(long long)arg4 zoomFactors:(id*)arg5 displayZoomFactors:(id*)arg6;
+ (bool)shouldEmulateTripleCameraZoomForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 videoStabilizationStrength:(long long)arg4;
+ (bool)shouldEmulateWideDualCameraZoomForMode:(long long)arg1 device:(long long)arg2 videoConfiguration:(long long)arg3 videoStabilizationStrength:(long long)arg4;
+ (double)zoomControlDisplayValueForZoomFactor:(double)arg1 mode:(long long)arg2 device:(long long)arg3 videoConfiguration:(long long)arg4;
+ (double)zoomControlDisplayValueForZoomFactor:(double)arg1 mode:(long long)arg2 device:(long long)arg3 videoConfiguration:(long long)arg4 videoStabilizationStrength:(long long)arg5;
+ (double)zoomScaleFromDevice:(long long)arg1 toDevice:(long long)arg2;

@end

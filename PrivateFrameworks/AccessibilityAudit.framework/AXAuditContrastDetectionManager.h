
@interface AXAuditContrastDetectionManager : NSObject

+ (id)sharedManager;

- (double)_euclideanDistanceBetweenColor1:(id)arg1 color2:(id)arg2;
- (id)_topColorsForColors:(id)arg1;
- (id)_topColorsForImageData:(id)arg1 optimized:(bool)arg2;
- (id)auditDisplayStringForAuditColor:(id)arg1;
- (id)colorForHexValueString:(id)arg1;
- (double)contrastRatioForColor1:(id)arg1 color2:(id)arg2;
- (id)contrastResultForInput:(id)arg1;
- (id)getSuggestedColorForFailContrast:(id)arg1 backgroundColor:(id)arg2;
- (double)luminanceForColor:(id)arg1;
- (id)pixelColorInImagePixelData:(struct __CFData { }*)arg1 atX:(int)arg2 atY:(int)arg3 width:(double)arg4;

@end

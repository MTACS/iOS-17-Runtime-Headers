
@protocol CRTextOrientationCorrecting <NSObject>

@required

- (NSArray *)regionsByCorrectingOrientationOnSortedRegions:(NSArray *)arg1 correctAllRegions:(bool)arg2 image:(CRImage *)arg3 rectifier:(CRMetalPolygonRectifier *)arg4 error:(id*)arg5;

@end

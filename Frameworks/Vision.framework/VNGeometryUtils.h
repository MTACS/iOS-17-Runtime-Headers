
@interface VNGeometryUtils : NSObject

+ (id)boundingCircleForContour:(id)arg1 error:(id*)arg2;
+ (id)boundingCircleForPoints:(id)arg1 error:(id*)arg2;
+ (id)boundingCircleForSIMDPoints:(const /* Warning: Unrecognized filer type: '1' using 'void*' */ void**)arg1 pointCount:(long long)arg2 error:(id*)arg3;
+ (bool)calculateArea:(double*)arg1 forContour:(id)arg2 orientedArea:(bool)arg3 error:(id*)arg4;
+ (bool)calculatePerimeter:(double*)arg1 forContour:(id)arg2 error:(id*)arg3;

@end

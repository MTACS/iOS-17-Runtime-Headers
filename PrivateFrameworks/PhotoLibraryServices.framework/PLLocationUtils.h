
@interface PLLocationUtils : NSObject

+ (bool)canUseCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
+ (struct PLCartesianCoordinate3D { float x1; float x2; float x3; })cartesianCoordinateFromLatitude:(float)arg1 longitude:(float)arg2;
+ (struct CLLocationCoordinate2D { double x1; double x2; })defaultLocationCoordinate2D;
+ (bool)horizontalAccuracyIsCoarse:(double)arg1;
+ (bool)locationIsCoarse:(id)arg1;
+ (id)predicateForAssetWithLocation;
+ (id)predicateForMomentWithLocation;

@end

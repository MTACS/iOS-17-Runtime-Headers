
@interface PXPeopleGridSizer : NSObject

+ (id)_gridCColumnInterpolator;
+ (id)_gridCGutterInterpolator;
+ (id)_gridCMarginInterpolator;
+ (id)_peopleHomeColumnInterpolator;
+ (struct CGSize { double x1; double x2; })cellSizeForGridClass:(long long)arg1 width:(double)arg2;
+ (double)marginForGridClass:(long long)arg1 width:(double)arg2;
+ (unsigned long long)numberOfColumnsForGridClass:(long long)arg1 width:(double)arg2;

@end


@interface _UIFocusRegionEvaluator : NSObject

+ (id)__regionsByEvaluatingOcclusionsForBaseRegions:(id)arg1 occludingRegions:(id)arg2 baseRegionsCanOccludeEachOther:(bool)arg3 inSnapshot:(id)arg4;
+ (id)_visibleSubregionsWhenRegion:(id)arg1 occludedByRegion:(id)arg2 inSnapshot:(id)arg3;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameForRegion:(id)arg1 inCoordinateSpace:(id)arg2;
+ (id)regionsByEvaluatingOcclusionsForRegions:(id)arg1 inSnapshot:(id)arg2;
+ (id)regionsByOccludingRegions:(id)arg1 beneathRegions:(id)arg2 inSnapshot:(id)arg3;
+ (id)subregionFromRegion:(id)arg1 withSnapshotFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 inSnapshot:(id)arg3;

@end

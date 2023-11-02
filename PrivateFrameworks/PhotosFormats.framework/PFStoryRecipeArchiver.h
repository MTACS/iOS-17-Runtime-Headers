
@interface PFStoryRecipeArchiver : NSObject

+ (id)stringByAssetKind;
+ (id)stringByClipMotionStyle;
+ (id)stringByClipPlaybackStyle;
+ (id)stringByClipTransition;
+ (id)stringByDisplayAssetCategory;
+ (id)stringByLibraryKind;
+ (id)stringByOverallDurationKind;
+ (id)stringBySongCategory;
+ (id)stringBySongSubcategory;

- (id)_archivedJSONObjectWithDurationInfo:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg1;
- (id)_archivedJSONObjectWithOverallDurationInfo:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })arg1;
- (id)archivedDataWithRecipe:(id)arg1;
- (id)archivedJSONDataWithRecipe:(id)arg1 options:(unsigned long long)arg2;
- (id)archivedJSONObjectWithAsset:(id)arg1;
- (id)archivedJSONObjectWithAutoEditDecisionList:(id)arg1;
- (id)archivedJSONObjectWithCMTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)archivedJSONObjectWithClip:(id)arg1;
- (id)archivedJSONObjectWithLibrary:(id)arg1;
- (id)archivedJSONObjectWithPresentation:(id)arg1;
- (id)archivedJSONObjectWithRecipe:(id)arg1;
- (id)archivedJSONObjectWithStyle:(id)arg1;

@end

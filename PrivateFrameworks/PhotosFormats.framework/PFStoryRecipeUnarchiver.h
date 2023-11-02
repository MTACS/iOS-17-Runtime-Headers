
@interface PFStoryRecipeUnarchiver : NSObject

- (id)_existingKeyInDictionary:(id)arg1 forObject:(id)arg2;
- (id)_unarchivedClipWithJSONObject:(id)arg1;
- (id)_unarchivedDecisionListWithJSONObject:(id)arg1 songAssetIdentifier:(id)arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })_unarchivedDurationInfoWithJSONObject:(id)arg1;
- (id)_unarchivedLibraryWithJSONObject:(id)arg1 error:(id*)arg2;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; struct { long long x_3_2_1; int x_3_2_2; unsigned int x_3_2_3; long long x_3_2_4; } x_2_1_3; } x2; })_unarchivedOverallDurationInfoWithJSONObject:(id)arg1;
- (id)_unarchivedStyleWithJSONObject:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })unarchiveTimeWithJSONObject:(id)arg1;
- (id)unarchivedAssetWithJSONObject:(id)arg1 error:(id*)arg2;
- (id)unarchivedRecipeWithData:(id)arg1 error:(id*)arg2;
- (id)unarchivedRecipeWithJSONObject:(id)arg1 error:(id*)arg2;

@end

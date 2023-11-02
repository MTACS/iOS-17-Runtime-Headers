
@interface PGMoodUtilities : NSObject

+ (id)_momentNodesForAssetCollection:(id)arg1 inGraph:(id)arg2 moodOptions:(id)arg3;
+ (id)moodGraphContextIdentifiersForAssetCollection:(id)arg1 withGraph:(id)arg2 moodOptions:(id)arg3;
+ (id)moodGraphContextIdentifiersForMomentNodes:(id)arg1 inGraph:(id)arg2 moodOptions:(id)arg3;
+ (id)moodGraphNodeIdentifiersForAssetCollection:(id)arg1 withGraph:(id)arg2 moodOptions:(id)arg3;
+ (id)moodGraphNodeIdentifiersForMomentNodes:(id)arg1;
+ (id)moodMeaningIdentifiersForAssetCollection:(id)arg1 withGraph:(id)arg2 moodOptions:(id)arg3;
+ (id)moodMeaningIdentifiersForMomentNodes:(id)arg1;
+ (id)moodSceneIdentifiersByMomentForAssetCollection:(id)arg1 withGraph:(id)arg2 moodOptions:(id)arg3;
+ (id)moodSceneIdentifiersByMomentForMomentNodes:(id)arg1;

@end

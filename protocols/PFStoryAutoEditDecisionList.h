
@protocol PFStoryAutoEditDecisionList

@required

- (<PFStoryRecipeClip> *)clipAtIndex:(long long)arg1;
- (NSString *)diagnosticDescription;
- (bool)isEqualToAutoEditDecisionList:(id <PFStoryAutoEditDecisionList>)arg1;
- (long long)numberOfClips;
- (NSString *)songAssetIdentifier;

@end

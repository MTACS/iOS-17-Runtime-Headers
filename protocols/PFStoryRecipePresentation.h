
@protocol PFStoryRecipePresentation

@required

- (<PFStoryRecipeClip> *)clipAtIndex:(long long)arg1;
- (long long)clipCount;
- (NSString *)diagnosticDescription;
- (NSString *)identifier;
- (bool)isEqualToPresentation:(id <PFStoryRecipePresentation>)arg1;

@end

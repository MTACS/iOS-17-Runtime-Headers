
@protocol PFStoryRecipeAsset

@required

- (NSString *)diagnosticDescription;
- (NSString *)identifier;
- (bool)isEqualToAsset:(id <PFStoryRecipeAsset>)arg1;
- (long long)kind;
- (NSURL *)url;

@end

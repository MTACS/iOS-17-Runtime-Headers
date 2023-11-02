
@protocol PFStoryRecipeLibrary

@required

- (NSString *)diagnosticDescription;
- (bool)isEqualToLibrary:(id <PFStoryRecipeLibrary>)arg1;
- (long long)kind;
- (NSURL *)url;

@end

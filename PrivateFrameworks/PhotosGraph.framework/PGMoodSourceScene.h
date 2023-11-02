
@interface PGMoodSourceScene : PGMoodSource

+ (id)_plistName;
+ (bool)shouldUseSceneIdentifier:(id)arg1;

- (void)_combineMoodVectorsWithGraph:(id)arg1;
- (unsigned long long)_sourceInputCount;
- (double)weight;

@end


@interface AVFragmentedMovieMinder : AVFragmentedAssetMinder

@property (nonatomic) double mindingInterval;
@property (nonatomic, readonly) NSArray *movies;

+ (id)fragmentedMovieMinderWithMovie:(id)arg1 mindingInterval:(double)arg2;

- (bool)_throwsWhenAlreadyMindedAssetIsAdded;
- (void)addFragmentedMovie:(id)arg1;
- (id)initWithMovie:(id)arg1 mindingInterval:(double)arg2;
- (double)mindingInterval;
- (id)movies;
- (void)removeFragmentedMovie:(id)arg1;
- (void)setMindingInterval:(double)arg1;

@end

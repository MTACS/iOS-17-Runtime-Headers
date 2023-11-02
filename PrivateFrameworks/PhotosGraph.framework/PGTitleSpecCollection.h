
@interface PGTitleSpecCollection : NSObject {
    NSArray * _specPools;
}

@property (nonatomic, readonly) NSArray *specPools;

+ (id)collectionWithSpecPools:(id)arg1;

- (void).cxx_destruct;
- (id)_allPossibleTitlesWithMomentNodes:(id)arg1 forHighlight:(bool)arg2 argumentEvaluationContext:(id)arg3;
- (id)allPossibleTitlesWithHighlightMomentNodes:(id)arg1 argumentEvaluationContext:(id)arg2;
- (id)allPossibleTitlesWithMomentNodes:(id)arg1 argumentEvaluationContext:(id)arg2;
- (id)description;
- (id)initWithSpecPools:(id)arg1;
- (id)specPools;

@end

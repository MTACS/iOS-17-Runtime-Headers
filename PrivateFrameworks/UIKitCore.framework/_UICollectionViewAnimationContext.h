
@interface _UICollectionViewAnimationContext : NSObject <_UICollectionViewAnimationContext> {
    NSDictionary * _animationsForOnScreenViews;
    NSDictionary * _appearingAnimations;
    NSMutableDictionary * _appearingAttributesDict;
    NSArray * _currentlyVisibleItemIndexPaths;
    <_UICollectionViewUpdateTranslating> * _dataSourceTranslator;
    NSDictionary * _disappearingAnimations;
    NSMutableDictionary * _disappearingAttributesDict;
    UICollectionViewLayout * _layout;
    NSArray * _previouslyVisibleItemIndexPaths;
    NSArray * _updates;
}

@property (nonatomic, retain) NSDictionary *animationsForOnScreenViews;
@property (nonatomic, retain) NSDictionary *appearingAnimations;
@property (nonatomic, copy) NSArray *appearingAttributes;
@property (nonatomic, retain) NSArray *currentlyVisibleItemIndexPaths;
@property (nonatomic, readonly) <_UICollectionViewUpdateTranslating> *dataSourceTranslator;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSDictionary *disappearingAnimations;
@property (nonatomic, copy) NSArray *disappearingAttributes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) UICollectionViewLayout *layout;
@property (nonatomic, retain) NSArray *previouslyVisibleItemIndexPaths;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *updates;

- (void).cxx_destruct;
- (id)animationsForOnScreenViews;
- (id)appearingAnimations;
- (id)appearingAttributes;
- (id)currentlyVisibleItemIndexPaths;
- (id)dataSourceTranslator;
- (id)disappearingAnimations;
- (id)disappearingAttributes;
- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;
- (id)finalIndexPathForInitialIndexPath:(id)arg1;
- (id)finalIndexPathForSupplementaryElementOfKind:(id)arg1 forInitialIndexPath:(id)arg2;
- (id)finalLayoutAttributesForDisappearingItemAtIndexPath:(id)arg1;
- (long long)finalSectionCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })finalSectionGlobalItemRangeForSection:(long long)arg1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (id)initWithDataSourceTranslator:(id)arg1 updates:(id)arg2 layout:(id)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })initalSectionGlobalItemRangeForSection:(long long)arg1;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;
- (id)initialIndexPathForFinalIndexPath:(id)arg1;
- (id)initialIndexPathForSupplementaryElementOfKind:(id)arg1 forFinalIndexPath:(id)arg2;
- (id)initialLayoutAttributesForAppearingItemAtIndexPath:(id)arg1;
- (long long)initialSectionCount;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;
- (id)layout;
- (id)previouslyVisibleItemIndexPaths;
- (void)setAnimationsForOnScreenViews:(id)arg1;
- (void)setAppearingAnimations:(id)arg1;
- (void)setAppearingAttributes:(id)arg1;
- (void)setCurrentlyVisibleItemIndexPaths:(id)arg1;
- (void)setDisappearingAnimations:(id)arg1;
- (void)setDisappearingAttributes:(id)arg1;
- (void)setPreviouslyVisibleItemIndexPaths:(id)arg1;
- (id)updates;

@end

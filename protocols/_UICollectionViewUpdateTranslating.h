
@protocol _UICollectionViewUpdateTranslating <NSObject>

@required

- (long long)finalGlobalIndexForInitialGlobalIndex:(long long)arg1;
- (NSIndexPath *)finalIndexPathForInitialIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)finalIndexPathForSupplementaryElementOfKind:(NSString *)arg1 forInitialIndexPath:(NSIndexPath *)arg2;
- (long long)finalSectionCount;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })finalSectionGlobalItemRangeForSection:(long long)arg1;
- (long long)finalSectionIndexForInitialSectionIndex:(long long)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })initalSectionGlobalItemRangeForSection:(long long)arg1;
- (long long)initialGlobalIndexForFinalGlobalIndex:(long long)arg1;
- (NSIndexPath *)initialIndexPathForFinalIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)initialIndexPathForSupplementaryElementOfKind:(NSString *)arg1 forFinalIndexPath:(NSIndexPath *)arg2;
- (long long)initialSectionCount;
- (long long)initialSectionIndexForFinalSectionIndex:(long long)arg1;

@end

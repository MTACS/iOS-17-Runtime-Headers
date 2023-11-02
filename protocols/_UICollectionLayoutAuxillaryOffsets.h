
@protocol _UICollectionLayoutAuxillaryOffsets <NSObject>

@required

- (bool)containsIndex:(long long)arg1 forElementKind:(NSString *)arg2;
- (NSSet *)elementKinds;
- (NSIndexSet *)indexesForElementKind:(NSString *)arg1;
- (long long)offsetForElementKind:(NSString *)arg1;
- (id)offsetsByApplyingOffsets:(id <_UICollectionLayoutAuxillaryOffsets>)arg1;
- (id)offsetsByRebasingOnOffsets:(id <_UICollectionLayoutAuxillaryOffsets>)arg1;
- (bool)overlapsOffsets:(id <_UICollectionLayoutAuxillaryOffsets>)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForElementKind:(NSString *)arg1;

@end

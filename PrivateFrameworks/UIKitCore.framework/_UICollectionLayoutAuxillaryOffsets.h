
@interface _UICollectionLayoutAuxillaryOffsets : NSObject <NSCopying, _UICollectionLayoutAuxillaryOffsets> {
    NSMutableDictionary * _offsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSSet *elementKinds;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)containsIndex:(long long)arg1 forElementKind:(id)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)elementKinds;
- (id)indexesForElementKind:(id)arg1;
- (id)init;
- (bool)isEqual:(id)arg1;
- (long long)offsetForElementKind:(id)arg1;
- (id)offsetsByApplyingOffsets:(id)arg1;
- (id)offsetsByRebasingOnOffsets:(id)arg1;
- (bool)overlapsOffsets:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeForElementKind:(id)arg1;

@end

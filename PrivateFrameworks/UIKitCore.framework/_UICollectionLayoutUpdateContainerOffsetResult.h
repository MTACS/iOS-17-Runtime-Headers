
@interface _UICollectionLayoutUpdateContainerOffsetResult : NSObject <_UICollectionLayoutUpdateContainerOffsetResult> {
    NSMutableDictionary * _invalidatedSupplementaryIndexesDict;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *invalidatedAuxillaryKinds;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addInvalidatedSupplementaryForKind:(id)arg1 indexPath:(id)arg2;
- (id)indexPathsForInvalidatedSupplementariesOfKind:(id)arg1;
- (id)init;
- (id)invalidatedAuxillaryKinds;

@end


@interface _UICollectionLayoutAuxillaryItemSolver : NSObject {
    <_UICollectionLayoutAuxillaryHosting> * _auxillaryHost;
    unsigned long long  _containerSizeDependentAxes;
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    NSSet * _elementKinds;
    NSDictionary * _enrolledSupplementaryFramesDict;
    NSArray * _frames;
    bool  _hasEstimatedSizes;
    struct CGPoint { 
        double x; 
        double y; 
    }  _hostContentOffset;
    struct NSDirectionalEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _hostContentSizeInsets;
    NSArray * _memoizedAuxillaryItems;
    long long  _memoizedSupplementaryKind;
    NSIndexSet * _pinnedSupplementaryIndexes;
    _UICollectionLayoutAuxillaryOffsets * _supplementariesThatCanAffectContentSize;
    NSDictionary * _supplementaryFramesKeyedByKindIndex;
    _UIRTree * _supplementaryItemGeometricIndexer;
    NSArray * _unpinnedFrames;
}

- (void).cxx_destruct;

@end

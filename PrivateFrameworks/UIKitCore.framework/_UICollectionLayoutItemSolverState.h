
@interface _UICollectionLayoutItemSolverState : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _additionalOffsetForOutermostGroup;
    NSArray * _auxillaryFrames;
    NSString * _errorDescription;
    _UIRTree * _geometricIndexer;
    long long  _itemFrameCount;
    NSArray * _itemFrames;
    NSArray * _preferredSizeGroupingRanges;
    NSArray * _solutionFrames;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _solvedFittingFrame;
    NSDictionary * _supplementaryDictByKindIndex;
    long long  _supplementaryFrameCount;
    <_UICollectionLayoutAuxillaryOffsets> * _supplementaryFrameOffsets;
}

- (void).cxx_destruct;

@end

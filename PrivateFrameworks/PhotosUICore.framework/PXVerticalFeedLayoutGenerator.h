
@interface PXVerticalFeedLayoutGenerator : PXFeedLayoutGenerator {
    struct PXTileInfo { 
        long long index; 
        struct CGSize { 
            double width; 
            double height; 
        } imageSize; 
        struct CGSize { 
            double width; 
            double height; 
        } minimumSize; 
        bool hasCaption; 
        bool hasLikes; 
        long long commentCount; 
        bool isBatchStart; 
    }  _enqueuedCaptionTileInfo;
    struct PXTileInfo { 
        long long index; 
        struct CGSize { 
            double width; 
            double height; 
        } imageSize; 
        struct CGSize { 
            double width; 
            double height; 
        } minimumSize; 
        bool hasCaption; 
        bool hasLikes; 
        long long commentCount; 
        bool isBatchStart; 
    }  _enqueuedCommentsTileInfo;
    struct PXTileInfo { 
        long long index; 
        struct CGSize { 
            double width; 
            double height; 
        } imageSize; 
        struct CGSize { 
            double width; 
            double height; 
        } minimumSize; 
        bool hasCaption; 
        bool hasLikes; 
        long long commentCount; 
        bool isBatchStart; 
    }  _enqueuedLikesTileInfo;
    struct CGPoint { 
        double x; 
        double y; 
    }  _origin;
    double  _referenceWidth;
    bool  _shouldDisplayCaptionsBelowBatches;
}

@property (nonatomic) double referenceWidth;
@property (nonatomic) bool shouldDisplayCaptionsBelowBatches;

- (bool)_addRowWithContiguousTiles:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1 count:(long long)arg2;
- (bool)_addRowWithTiles:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1 imageFrames:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 count:(long long)arg3;
- (bool)_addSpecialSequenceBlock:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1;
- (bool)_dequeueCaption;
- (bool)_dequeueComments;
- (bool)_dequeueLikes;
- (void)_enqueueCaptionWithTileInfo:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; })arg1;
- (void)_enqueueCommentsWithTileInfo:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; })arg1;
- (void)_enqueueLikesWithTileInfo:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; })arg1;
- (void)_enumerateRowFramesWithContiguousTiles:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1 count:(long long)arg2 useMagneticGuidelines:(bool)arg3 block:(id /* block */)arg4;
- (bool)_hasEnqueuedCaption;
- (bool)_hasEnqueuedComments;
- (bool)_hasEnqueuedLikes;
- (bool)_hasLeftSuboptimalRow;
- (bool)_isAtEndOfRow;
- (bool)_parseSingleTile;
- (bool)_parseSpecialSequence;
- (bool)_parseSpecialSubsequenceWithRowRequired:(bool)arg1 rowParsed:(bool*)arg2;
- (bool)_parseSpecialTileTriplet;
- (bool)_parseTilePair;
- (bool)_parseTileRequiringFullWidth;
- (bool)_parseTileTriplet;
- (bool)_scanNonPanoramaSequence:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1 count:(long long)arg2;
- (bool)_scanSpecialSequenceBlock:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1;
- (bool)_scanSpecialSequenceRow:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1 count:(long long*)arg2;
- (bool)_scanTilePair:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1;
- (bool)_scanTileRequiringFullWidth:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1;
- (bool)_scanTileRequiringNewRow:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1;
- (bool)_scanTileTriplet:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1;
- (bool)_scanTripletWithLargeLead:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1;
- (bool)_scanTripletWithRearrangment:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; }*)arg1;
- (void)_willAddCaptionRowWithFirstTileInfo:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; })arg1;
- (void)_willAddCommentRowsWithFirstTileInfo:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; })arg1;
- (void)_willAddLikeRowWithFirstTileInfo:(struct PXTileInfo { long long x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; bool x4; bool x5; long long x6; bool x7; })arg1;
- (void)didParseTiles;
- (bool)parseNextTiles;
- (double)referenceDistanceForMagneticGuidelines;
- (double)referenceWidth;
- (void)setReferenceWidth:(double)arg1;
- (void)setShouldDisplayCaptionsBelowBatches:(bool)arg1;
- (bool)shouldDisplayCaptionsBelowBatches;
- (void)willParseTiles;

@end


@interface _PXStoryConcreteClipComposition : NSObject <PXStoryClipComposition> {
    long long  _clipAssetIndexes;
    long long  _dividerAxes;
    unsigned int  _edges;
    NSString * _label;
    long long  _mainDividerAxis;
    long long  _numberOfAssets;
    long long  _numberOfClips;
    double  _primarySplitRatio;
    double  _splitRatios;
}

@property (nonatomic, readonly) const long long*clipAssetIndexes;
@property (nonatomic, readonly) bool clipFramesExtendToBounds;
@property (nonatomic, readonly) const long long*dividerAxes;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) long long mainDividerAxis;
@property (nonatomic, readonly) double mainDividerSplitRatio;
@property (nonatomic, readonly) long long numberOfAssets;
@property (nonatomic, readonly) long long numberOfClips;
@property (nonatomic, readonly) double primarySplitRatio;

- (void).cxx_destruct;
- (const long long*)clipAssetIndexes;
- (bool)clipFramesExtendToBounds;
- (id)description;
- (const long long*)dividerAxes;
- (void)getClipFrames:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 forContext:(const struct { struct CGSize { double x_1_1_1; double x_1_1_2; } x1; double x2; double x3; }*)arg2;
- (id)init;
- (id)initWithNumberOfClips:(long long)arg1 primaryEdge:(unsigned int)arg2 splitRatio:(double)arg3 secondaryEdge:(unsigned int)arg4 splitRatio:(double)arg5 label:(id)arg6;
- (id)initWithOneUp;
- (id)initWithSingleAssetSplitAxis:(long long)arg1 splitRatio:(double)arg2 label:(id)arg3;
- (id)initWithTwoUpEdge:(unsigned int)arg1 splitRatio:(double)arg2 label:(id)arg3;
- (id)label;
- (long long)mainDividerAxis;
- (double)mainDividerSplitRatio;
- (long long)numberOfAssets;
- (long long)numberOfClips;
- (double)primarySplitRatio;

@end

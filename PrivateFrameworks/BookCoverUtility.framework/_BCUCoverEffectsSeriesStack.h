
@interface _BCUCoverEffectsSeriesStack : NSObject <BCUImageSetFilter, BCUSeriesCoverEffectsFilter> {
    NSString * _identifier;
    BCULayerRenderer * _renderer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) BCULayerRenderer *renderer;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (double)_coverScaleForIndex:(unsigned long long)arg1;
- (struct CGPoint { double x1; double x2; })_positionForImageAtIndex:(long long)arg1 imageSetCount:(long long)arg2 coverWidth:(double)arg3 coverAreaWidth:(double)arg4 isRTL:(bool)arg5;
- (id)_stackLayerForDiagonalstyleWithImages:(id)arg1 filters:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 contentsScale:(double)arg4 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg5 path:(const struct CGPath {}**)arg6;
- (id)_stackLayerForHorizontalstyleWithImages:(id)arg1 filters:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 contentsScale:(double)arg4 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg5 path:(const struct CGPath {}**)arg6 isRTL:(bool)arg7;
- (id)_stackLayerWithImages:(id)arg1 filters:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 contentsScale:(double)arg4 insets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; }*)arg5 path:(const struct CGPath {}**)arg6;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 renderer:(id)arg2;
- (id)newOperationWithImages:(id)arg1 filters:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3 contentsScale:(double)arg4 waitForCPUSynchronization:(bool)arg5 completion:(id /* block */)arg6;
- (id)renderer;

@end

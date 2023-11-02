
@interface PXOverlayFeedLayoutGenerator : PXCachingLayoutGenerator {
    struct CGPoint { 
        double x; 
        double y; 
    }  _visibleOrigin;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } visibleOrigin;

- (struct { struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; })_frameForItemAtIndex:(long long)arg1 in:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 verticalOffset:(double)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_frameForItemInColumn:(long long)arg1 columnCount:(long long)arg2 verticalOffset:(double)arg3;
- (void)setVisibleOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setVisibleOrigin:(struct CGPoint { double x1; double x2; })arg1 updateFirstItemPosition:(bool)arg2;
- (void)updateContentSize:(out struct CGSize { double x1; double x2; }*)arg1 itemRects:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 itemKinds:(out long long*)arg3 zPositions:(out float*)arg4;
- (struct CGPoint { double x1; double x2; })visibleOrigin;

@end


@interface PXCachingLayoutGenerator : PXLayoutGenerator {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    bool  _isValid;
    long long  _itemCapacity;
    long long * _itemKinds;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _itemRects;
    float * _zPositions;
}

- (void)_updateIfNeeded;
- (void)dealloc;
- (void)getGeometries:(struct _PXLayoutGeometry { long long x1; struct CGPoint { double x_2_1_1; double x_2_1_2; } x2; struct CGSize { double x_3_1_1; double x_3_1_2; } x3; struct CGAffineTransform { double x_4_1_1; double x_4_1_2; double x_4_1_3; double x_4_1_4; double x_4_1_5; double x_4_1_6; } x4; float x5; long long x6; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_7_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_7_1_2; } x7; struct CGSize { double x_8_1_1; double x_8_1_2; } x8; }*)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withKind:(long long)arg3;
- (void)invalidate;
- (struct CGSize { double x1; double x2; })size;
- (void)updateContentSize:(out struct CGSize { double x1; double x2; }*)arg1 itemRects:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2;
- (void)updateContentSize:(out struct CGSize { double x1; double x2; }*)arg1 itemRects:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 itemKinds:(out long long*)arg3;
- (void)updateContentSize:(out struct CGSize { double x1; double x2; }*)arg1 itemRects:(out struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg2 itemKinds:(out long long*)arg3 zPositions:(out float*)arg4;

@end


@interface PXLayoutPerformerOutput : NSObject {
    long long  _capacity;
    long long  _lastIndex;
    struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } * _layoutRects;
}

@property (nonatomic, readonly) long long count;

- (void)appendLayoutRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (long long)count;
- (void)dealloc;
- (id)initWithCapacity:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })layoutRectAtIndex:(long long)arg1;
- (void)removeAllRects;

@end

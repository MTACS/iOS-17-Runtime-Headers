
@interface PXGPointReference : NSObject {
    bool  _isValid;
    PXGLayout * _layout;
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
}

@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) PXGLayout *layout;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } point;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPoint:(struct CGPoint { double x1; double x2; })arg1 layout:(id)arg2;
- (void)invalidate;
- (bool)isValid;
- (id)layout;
- (struct CGPoint { double x1; double x2; })point;

@end

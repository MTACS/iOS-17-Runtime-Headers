
@interface DUDisplayInfoObjC : NSObject {
    _TtC21DocumentUnderstanding13DUDisplayInfo * _underlying;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } absoluteOriginOnScreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameInWindow;
@property (nonatomic) bool isOnScreen;

- (void).cxx_destruct;
- (struct CGPoint { double x1; double x2; })absoluteOriginOnScreen;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameInWindow;
- (id)init;
- (bool)isOnScreen;
- (void)setAbsoluteOriginOnScreen:(struct CGPoint { double x1; double x2; })arg1;
- (void)setFrameInWindow:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsOnScreen:(bool)arg1;

@end

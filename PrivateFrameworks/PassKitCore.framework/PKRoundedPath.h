
@interface PKRoundedPath : NSObject {
    struct CGPath { } * _CGPath;
}

@property (readonly) struct CGPath { }*CGPath;

+ (id)pathWithRoundedRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 cornerRadius:(double)arg2;

- (struct CGPath { }*)CGPath;
- (void)addContinuousCornerToPath:(struct CGPath { }*)arg1 trueCorner:(struct CGPoint { double x1; double x2; })arg2 cornerRadius:(struct CGSize { double x1; double x2; })arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(bool)arg6 fullRadius:(bool)arg7;
- (void)dealloc;
- (id)init;
- (id)initWithRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 smoothPillShapes:(bool)arg4;

@end

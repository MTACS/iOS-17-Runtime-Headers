
@interface SUBezierPathMaskProvider : SUMaskProvider {
    UIBezierPath * _bezierPath;
}

@property (nonatomic, retain) UIBezierPath *bezierPath;

- (id)bezierPath;
- (struct CGPath { }*)copyPathForMaskWithSize:(struct CGSize { double x1; double x2; })arg1;
- (void)dealloc;
- (void)setBezierPath:(id)arg1;

@end

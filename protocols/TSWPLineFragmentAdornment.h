
@protocol TSWPLineFragmentAdornment <NSObject>

@required

- (void)drawAdornmentForFragment:(const void*)arg1 inContext:(struct CGContext { }*)arg2 withFlags:(unsigned int)arg3 state:(const void*)arg4 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg5;
- (bool)isBackground;

@end

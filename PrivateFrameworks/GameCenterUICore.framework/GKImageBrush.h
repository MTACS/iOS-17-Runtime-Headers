
@interface GKImageBrush : GKThemeBrush {
    id /* block */  _inputTransform;
}

@property (nonatomic, copy) id /* block */ inputTransform;

- (void).cxx_destruct;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (id /* block */)inputTransform;
- (double)scaleForInput:(id)arg1;
- (void)setInputTransform:(id /* block */)arg1;
- (struct CGSize { double x1; double x2; })sizeForInput:(id)arg1;

@end

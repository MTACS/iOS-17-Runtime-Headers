
@interface GKBrushList : GKThemeBrush {
    NSArray * _brushList;
}

@property (nonatomic, retain) NSArray *brushList;

+ (id)brushListWithBrushes:(id)arg1;

- (void).cxx_destruct;
- (id)brushList;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didDrawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withBrushAtIndex:(unsigned long long)arg2 input:(id)arg3;
- (void)drawInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withContext:(struct CGContext { }*)arg2 input:(id)arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })drawRectForBrushAtIndex:(unsigned long long)arg1 fromRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 input:(id)arg3;
- (void)setBrushList:(id)arg1;
- (void)willDrawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withBrushAtIndex:(unsigned long long)arg2 input:(id)arg3;

@end

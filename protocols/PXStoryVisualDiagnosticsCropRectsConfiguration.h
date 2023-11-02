
@protocol PXStoryVisualDiagnosticsCropRectsConfiguration

@required

- (struct CGSize { double x1; double x2; })TVPreviewSize;
- (struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })kenBurnsAnimationInfo;
- (<PXStoryMovieHighlight> *)movieHighlight;
- (void)setKenBurnsAnimationInfo:(struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg1;
- (void)setMovieHighlight:(id <PXStoryMovieHighlight>)arg1;
- (void)setTVPreviewSize:(struct CGSize { double x1; double x2; })arg1;

@end

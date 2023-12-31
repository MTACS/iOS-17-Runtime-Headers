
@interface TSDMovieRenderingOperation : TSDSwatchRenderingOperation {
    TSDMovieInfo * mMovieInfo;
    bool  mShouldClipVertically;
}

@property (retain) TSDMovieInfo *movieInfo;

- (void)dealloc;
- (void)doWorkWithReadLock;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 movieInfo:(id)arg5 documentRoot:(id)arg6;
- (id)initWithPreset:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2 imageScale:(double)arg3 swatchFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4 movieInfo:(id)arg5 documentRoot:(id)arg6 shouldClipVertically:(bool)arg7;
- (id)movieInfo;
- (void)setMovieInfo:(id)arg1;

@end

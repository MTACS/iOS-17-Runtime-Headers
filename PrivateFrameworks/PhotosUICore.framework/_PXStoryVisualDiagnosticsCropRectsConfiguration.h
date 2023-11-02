
@interface _PXStoryVisualDiagnosticsCropRectsConfiguration : NSObject <PXStoryVisualDiagnosticsCropRectsConfiguration> {
    struct CGSize { 
        double width; 
        double height; 
    }  TVPreviewSize;
    struct { 
        struct { 
            struct CGAffineTransform { 
                double a; 
                double b; 
                double c; 
                double d; 
                double tx; 
                double ty; 
            } t; 
        } sourceContentsRect; 
        struct { 
            struct CGAffineTransform { 
                double a; 
                double b; 
                double c; 
                double d; 
                double tx; 
                double ty; 
            } t; 
        } targetContentsRect; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  kenBurnsAnimationInfo;
    <PXStoryMovieHighlight> * movieHighlight;
}

@property (nonatomic) struct CGSize { double x1; double x2; } TVPreviewSize;
@property (nonatomic) struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; } kenBurnsAnimationInfo;
@property (nonatomic, retain) <PXStoryMovieHighlight> *movieHighlight;

- (void).cxx_destruct;
- (struct CGSize { double x1; double x2; })TVPreviewSize;
- (struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })kenBurnsAnimationInfo;
- (id)movieHighlight;
- (void)setKenBurnsAnimationInfo:(struct { struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_1_1_1; } x1; struct { struct CGAffineTransform { double x_1_2_1; double x_1_2_2; double x_1_2_3; double x_1_2_4; double x_1_2_5; double x_1_2_6; } x_2_1_1; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; })arg1;
- (void)setMovieHighlight:(id)arg1;
- (void)setTVPreviewSize:(struct CGSize { double x1; double x2; })arg1;

@end

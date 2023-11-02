
@interface HMIHTMLReport : HMFObject {
    NSString * _outputPath;
    NSOutputStream * _stream;
}

@property (readonly) NSString *outputPath;
@property (readonly) NSOutputStream *stream;

+ (id)boxForRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
+ (id)boxesForEvent:(id)arg1 isTruth:(bool)arg2;

- (void).cxx_destruct;
- (id)_loadResource:(id)arg1 withExtension:(id)arg2;
- (void)appendFaceCrop:(id)arg1 imageBorder:(int)arg2 imageColor:(id)arg3 outlineBorder:(int)arg4 outlineColor:(id)arg5;
- (void)appendFragmentResult:(id)arg1;
- (void)appendFragmentResult:(id)arg1 assetPath:(id)arg2;
- (void)appendFrame:(id)arg1 text:(id)arg2;
- (void)appendFrame:(id)arg1 text:(id)arg2 boxes:(id)arg3 imageBorder:(int)arg4 imageColor:(id)arg5 outlineBorder:(int)arg6 outlineColor:(id)arg7;
- (void)appendFrameResult:(id)arg1 frameTruth:(id)arg2 description:(id)arg3;
- (void)appendHeaderWithTitle:(id)arg1 textColor:(id)arg2 backgroundColor:(id)arg3;
- (void)appendJPEG:(id)arg1 imageBorder:(int)arg2 imageColor:(id)arg3 outlineBorder:(int)arg4 outlineColor:(id)arg5;
- (void)appendString:(id)arg1;
- (void)appendText:(id)arg1;
- (void)dealloc;
- (void)flush;
- (id)initWithTitle:(id)arg1 outputPath:(id)arg2;
- (id)outputPath;
- (id)stream;

@end

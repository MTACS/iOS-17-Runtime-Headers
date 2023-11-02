
@interface _UIASCIIArtFramesRenderer : NSObject {
    NSArray * _frames;
    double  _outputLineWidth;
}

@property (nonatomic, readonly) NSArray *frames;
@property (nonatomic, readonly) double outputLineWidth;

- (void).cxx_destruct;
- (id)_normalizeFrames:(id)arg1;
- (id)description;
- (id)frames;
- (id)initWithFrames:(id)arg1;
- (id)initWithFrames:(id)arg1 outputLineWidth:(double)arg2;
- (double)outputLineWidth;
- (id)renderedLines;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaledRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 scaleSize:(struct CGSize { double x1; double x2; })arg2;
- (id)visualDescription;

@end

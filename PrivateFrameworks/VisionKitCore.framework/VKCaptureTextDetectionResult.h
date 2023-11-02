
@interface VKCaptureTextDetectionResult : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  __imageBounds;
    double  _baselineAngle;
    NSArray * _blockQuads;
    VKQuad * _boundingQuad;
    NSArray * _lineQuads;
    NSArray * _normalizedLineQuads;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } _imageBounds;
@property (nonatomic, readonly) double baselineAngle;
@property (nonatomic, readonly) NSArray *blockQuads;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingBox;
@property (nonatomic, readonly) VKQuad *boundingQuad;
@property (nonatomic, readonly) NSArray *lineQuads;
@property (nonatomic, readonly) NSArray *normalizedLineQuads;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_imageBounds;
- (double)baselineAngle;
- (id)blockQuads;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)boundingPathWithPadding:(double)arg1 cornerRadius:(double)arg2;
- (id)boundingQuad;
- (id)groupedPath;
- (id)groupedPathForLinesWithPadding:(double)arg1 cornerRadius:(double)arg2;
- (id)initWithBlock:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithBlocks:(id)arg1 imageSize:(struct CGSize { double x1; double x2; })arg2;
- (id)lineQuads;
- (id)normalizedLineQuads;

@end

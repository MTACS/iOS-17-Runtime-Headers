
@interface FigCaptureSessionPreparedBracket : NSObject {
    int  _colorSpaceProperties;
    unsigned int  _imageCount;
    struct { 
        int width; 
        int height; 
    }  _outputDimensions;
    unsigned int  _outputFormat;
}

@property (nonatomic) int colorSpaceProperties;
@property (nonatomic) unsigned int imageCount;
@property (nonatomic) struct { int x1; int x2; } outputDimensions;
@property (nonatomic) unsigned int outputFormat;

- (int)colorSpaceProperties;
- (unsigned int)imageCount;
- (struct { int x1; int x2; })outputDimensions;
- (unsigned int)outputFormat;
- (void)setColorSpaceProperties:(int)arg1;
- (void)setImageCount:(unsigned int)arg1;
- (void)setOutputDimensions:(struct { int x1; int x2; })arg1;
- (void)setOutputFormat:(unsigned int)arg1;

@end

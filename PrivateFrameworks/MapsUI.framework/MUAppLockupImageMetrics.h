
@interface MUAppLockupImageMetrics : NSObject {
    struct CGSize { 
        double width; 
        double height; 
    }  _frameSize;
    double  _scale;
    unsigned long long  _variant;
}

@property (nonatomic) struct CGSize { double x1; double x2; } frameSize;
@property (nonatomic) double scale;
@property (nonatomic) unsigned long long variant;

- (struct CGSize { double x1; double x2; })frameSize;
- (double)scale;
- (void)setFrameSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setScale:(double)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (unsigned long long)variant;

@end

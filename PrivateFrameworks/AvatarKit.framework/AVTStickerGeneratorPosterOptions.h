
@interface AVTStickerGeneratorPosterOptions : NSObject {
    bool  _growsForExtraTallContent;
    double  _minimumHorizontalMargin;
    double  _scaleFactor;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic) bool growsForExtraTallContent;
@property (nonatomic) double minimumHorizontalMargin;
@property (nonatomic) double scaleFactor;
@property (nonatomic) struct CGSize { double x1; double x2; } size;

- (bool)growsForExtraTallContent;
- (id)init;
- (double)minimumHorizontalMargin;
- (double)scaleFactor;
- (void)setGrowsForExtraTallContent:(bool)arg1;
- (void)setMinimumHorizontalMargin:(double)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end

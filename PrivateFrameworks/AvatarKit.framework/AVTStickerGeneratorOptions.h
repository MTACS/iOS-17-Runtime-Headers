
@interface AVTStickerGeneratorOptions : NSObject {
    unsigned long long  _contentMode;
    float  _posterMinimumHorizontalMargin;
    struct CGSize { 
        double width; 
        double height; 
    }  _posterSizeInPixels;
    double  _scaleFactor;
    double  _size;
    double  _sizeMultiplier;
    bool  _useLegacyCorrectClippingImplementation;
}

@property (nonatomic) unsigned long long contentMode;
@property (nonatomic) bool correctClipping;
@property (nonatomic) double scaleFactor;
@property (nonatomic) double size;
@property (nonatomic) double sizeMultiplier;
@property (nonatomic) bool useLegacyCorrectClippingImplementation;

+ (id)defaultOptions;
+ (id)optionsWithCorrectClipping:(bool)arg1;

- (unsigned long long)contentMode;
- (bool)correctClipping;
- (id)init;
- (double)scaleFactor;
- (void)setContentMode:(unsigned long long)arg1;
- (void)setCorrectClipping:(bool)arg1;
- (void)setScaleFactor:(double)arg1;
- (void)setSize:(double)arg1;
- (void)setSizeMultiplier:(double)arg1;
- (void)setUseLegacyCorrectClippingImplementation:(bool)arg1;
- (double)size;
- (double)sizeMultiplier;
- (bool)useLegacyCorrectClippingImplementation;

@end

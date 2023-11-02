
@interface PTTexture : NSObject {
    long long  _YCbCrColorDepth;
    bool  _YCbCrFullRange;
    NSString * _YCbCrMatrix;
    NSString * _colorPrimaries;
    NSString * _transferFunction;
}

@property (nonatomic) long long YCbCrColorDepth;
@property (nonatomic) bool YCbCrFullRange;
@property (nonatomic, retain) NSString *YCbCrMatrix;
@property (nonatomic, retain) NSString *colorPrimaries;
@property (nonatomic, retain) NSString *transferFunction;

+ (id)createFromPixelbuffer:(struct __CVBuffer { }*)arg1 device:(id)arg2 read:(bool)arg3 write:(bool)arg4;
+ (id)createRGBA:(id)arg1;
+ (id)createYUV420:(id)arg1 chroma:(id)arg2;
+ (id)getAttachmentString:(struct __CVBuffer { }*)arg1 forKey:(struct __CFString { }*)arg2;
+ (bool)isRGBA:(struct __CVBuffer { }*)arg1;

- (void).cxx_destruct;
- (long long)YCbCrColorDepth;
- (bool)YCbCrFullRange;
- (id)YCbCrMatrix;
- (id)colorPrimaries;
- (void)copyMetadataTo:(id)arg1;
- (unsigned long long)height;
- (void)setColorPrimaries:(id)arg1;
- (void)setTransferFunction:(id)arg1;
- (void)setYCbCrColorDepth:(long long)arg1;
- (void)setYCbCrFullRange:(bool)arg1;
- (void)setYCbCrMatrix:(id)arg1;
- (id)transferFunction;
- (unsigned long long)width;

@end

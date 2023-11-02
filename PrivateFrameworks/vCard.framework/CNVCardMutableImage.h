
@interface CNVCardMutableImage : CNVCardImage {
    struct CGImage { } * _CGImage;
    bool  _attemptedCGImage;
    NSNumber * _compressionQuality;
    NSDictionary * _originalCropRects;
    NSData * _originalData;
    struct CGSize { 
        double width; 
        double height; 
    }  _originalSize;
    struct __CFString { } * _sourceImageFormatUTI;
    NSValue * _targetSizeValue;
}

@property (nonatomic, readonly) struct CGImage { }*CGImage;
@property (nonatomic, readonly) bool attemptedCGImage;
@property (nonatomic, copy) NSNumber *compressionQuality;
@property (nonatomic, readonly) NSDictionary *originalCropRects;
@property (nonatomic, readonly, copy) NSData *originalData;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } originalSize;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic) struct __CFString { }*sourceImageFormatUTI;
@property (nonatomic, copy) NSValue *targetSizeValue;

+ (id)CGImageCreateWithData:(id)arg1 maxSizeValue:(id)arg2;
+ (id)scaleCropRects:(id)arg1 factor:(double)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })scaleRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 byFactor:(double)arg2;

- (void).cxx_destruct;
- (struct CGImage { }*)CGImage;
- (bool)attemptedCGImage;
- (id)compressionQuality;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)cropRects;
- (id)data;
- (void)dealloc;
- (void)describePropertiesWithBuilder:(id)arg1;
- (bool)hasAlphaChannel;
- (id)initWithData:(id)arg1 cropRects:(id)arg2 size:(struct CGSize { double x1; double x2; })arg3;
- (bool)isSourceLossless;
- (void)nts_initCGImage;
- (void)nts_invalidateImageQuality;
- (void)nts_invalidateImageSize;
- (void)nts_updateRepresentation;
- (id)originalCropRects;
- (id)originalData;
- (struct CGSize { double x1; double x2; })originalSize;
- (id)renderCGImage:(struct CGImage { }*)arg1;
- (void)setCompressionQuality:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setSourceImageFormatUTI:(struct __CFString { }*)arg1;
- (void)setTargetSizeValue:(id)arg1;
- (bool)shouldReturnPNG;
- (struct CGSize { double x1; double x2; })size;
- (struct __CFString { }*)sourceImageFormatUTI;
- (id)targetSizeValue;

@end

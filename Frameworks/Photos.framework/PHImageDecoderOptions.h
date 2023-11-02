
@interface PHImageDecoderOptions : NSObject {
    bool  _allowFallbackDecoder;
    long long  _contentMode;
    bool  _decodeAsHDR;
    bool  _highPriority;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _normalizedCropRect;
    bool  _optimizeForDrawing;
    bool  _preferSWDecode;
    long long  _resizeMode;
    bool  _shouldLoadGainMap;
    struct CGSize { 
        double width; 
        double height; 
    }  _targetSize;
    bool  _useLowMemoryMode;
    bool  _waitUntilComplete;
}

@property (nonatomic) bool allowFallbackDecoder;
@property (nonatomic) long long contentMode;
@property (nonatomic) bool decodeAsHDR;
@property (nonatomic) bool highPriority;
@property (nonatomic, readonly) long long maximumLongSideLength;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } normalizedCropRect;
@property (nonatomic) bool optimizeForDrawing;
@property (nonatomic) bool preferSWDecode;
@property (nonatomic) long long resizeMode;
@property (nonatomic, readonly) bool shouldCrop;
@property (nonatomic) bool shouldLoadGainMap;
@property (nonatomic) struct CGSize { double x1; double x2; } targetSize;
@property (nonatomic) bool useLowMemoryMode;
@property (nonatomic) bool waitUntilComplete;

- (bool)allowFallbackDecoder;
- (long long)contentMode;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)decodeAsHDR;
- (bool)highPriority;
- (id)init;
- (long long)maximumLongSideLength;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })normalizedCropRect;
- (bool)optimizeForDrawing;
- (bool)preferSWDecode;
- (long long)resizeMode;
- (void)setAllowFallbackDecoder:(bool)arg1;
- (void)setContentMode:(long long)arg1;
- (void)setDecodeAsHDR:(bool)arg1;
- (void)setHighPriority:(bool)arg1;
- (void)setNormalizedCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setOptimizeForDrawing:(bool)arg1;
- (void)setPreferSWDecode:(bool)arg1;
- (void)setResizeMode:(long long)arg1;
- (void)setShouldLoadGainMap:(bool)arg1;
- (void)setTargetSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setUseLowMemoryMode:(bool)arg1;
- (void)setWaitUntilComplete:(bool)arg1;
- (bool)shouldCrop;
- (bool)shouldLoadGainMap;
- (struct CGSize { double x1; double x2; })targetSize;
- (bool)useLowMemoryMode;
- (bool)waitUntilComplete;

@end


@interface JFXEffectStaticPreviewOptions : JFXEffectPreviewOptions {
    bool  _dontCache;
    bool  _dontCacheToDisk;
    bool  _dontUseThumbnailAssetWhenAvailable;
    JTImage * _renderBackgroundImage;
    id /* block */  _renderPropertiesConfigurationBlock;
    struct { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } start; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } duration; 
    }  _renderRange;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _renderTime;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _renderedImageCropRect;
}

@property (nonatomic) bool dontCache;
@property (nonatomic) bool dontCacheToDisk;
@property (nonatomic) bool dontUseThumbnailAssetWhenAvailable;
@property (nonatomic, retain) JTImage *renderBackgroundImage;
@property (nonatomic, copy) id /* block */ renderPropertiesConfigurationBlock;
@property (nonatomic) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } renderRange;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } renderTime;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } renderedImageCropRect;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dontCache;
- (bool)dontCacheToDisk;
- (bool)dontUseThumbnailAssetWhenAvailable;
- (id)initStaticPreviewOptions;
- (id)renderBackgroundImage;
- (id /* block */)renderPropertiesConfigurationBlock;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })renderRange;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })renderTime;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })renderedImageCropRect;
- (void)setDontCache:(bool)arg1;
- (void)setDontCacheToDisk:(bool)arg1;
- (void)setDontUseThumbnailAssetWhenAvailable:(bool)arg1;
- (void)setRenderBackgroundImage:(id)arg1;
- (void)setRenderPropertiesConfigurationBlock:(id /* block */)arg1;
- (void)setRenderRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (void)setRenderTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setRenderedImageCropRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;

@end


@interface TSDTexturedRectangle : NSObject <NSCopying> {
    TSUColor * _backgroundColor;
    double  _bakedScale;
    bool  _isVerticalText;
    NSMutableArray * _liveMetalTexturePool;
    unsigned long long  _liveMetalTexturePoolIndex;
    NSMutableDictionary * _liveMetalTextureToTimestamp;
    NSObject<OS_dispatch_semaphore> * _liveMetalTexturesSemaphore;
    NSMutableDictionary * _liveMetalTimestampToTexture;
    TSDMetalShader * _liveTextureSourceShader;
    <TSDLiveTexturedRectangleSource> * _liveTexturedRectangleSource;
    TSDTexturedRectangle * _liveTexturedRectangleSourceProxy;
    <MTLTexture> * _metalTexture;
    bool  _shouldUseDisplayLinkPresentationTime;
    NSString * _text;
    double  _textBaseline;
    TSUColor * _textColor;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textRange;
    double  _textXHeight;
    NSMutableDictionary * mAttributes;
    struct CGImage { } * mBakedImage;
    struct CGColorSpace { } * mColorSpace;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mContentRect;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mFrameOnCanvas;
    bool  mIsFlattened;
    CALayer * mLayer;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOffset;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mOriginalFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOriginalPosition;
    TSDTextureSet * mParent;
    id /* block */  mRenderBlock;
    bool  mShouldGenerateMipmap;
    bool  mSingleTextureContainsMipmaps;
    unsigned int  mSingleTextureName;
    struct CGSize { 
        double width; 
        double height; 
    }  mSize;
    struct CGImage { } * mSourceImage;
    NSMutableArray * mTags;
    double  mTextureOpacity;
    int  mTextureType;
}

@property (nonatomic, retain) NSMutableDictionary *attributes;
@property (nonatomic, copy) TSUColor *backgroundColor;
@property (nonatomic, readonly) double bakedScale;
@property (nonatomic) struct CGColorSpace { }*colorSpace;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } contentRect;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frameOnCanvas;
@property (nonatomic, readonly) struct CGImage { }*image;
@property (nonatomic, readonly) bool isBackgroundTexture;
@property (nonatomic) bool isFlattened;
@property (nonatomic, readonly) bool isRenderable;
@property (nonatomic) bool isVerticalText;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) <MTLTexture> *metalTexture;
@property (nonatomic) struct CGPoint { double x1; double x2; } offset;
@property (nonatomic, readonly) float opacityFromAttributes;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalPosition;
@property (nonatomic) TSDTextureSet *parent;
@property (nonatomic, readonly) CALayer *parentLayer;
@property (nonatomic) bool shouldGenerateMipmap;
@property (nonatomic) bool shouldUseDisplayLinkPresentationTime;
@property (nonatomic, readonly) unsigned int singleTextureName;
@property (nonatomic, readonly) double singleTextureOpacity;
@property (nonatomic, readonly) unsigned int singleTextureTarget;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;
@property (nonatomic, retain) NSMutableArray *tags;
@property (nonatomic, copy) NSString *text;
@property (nonatomic) double textBaseline;
@property (nonatomic, copy) TSUColor *textColor;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;
@property (nonatomic) double textXHeight;
@property (nonatomic) double textureOpacity;
@property (nonatomic) int textureType;
@property (nonatomic, readonly) struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; } transformFromAttributes;

+ (id)setupMetalShaderForContext:(id)arg1;

- (void).cxx_destruct;
- (void)adjustAnchorRelativeToParentsCenterOfRotation:(struct CGPoint { double x1; double x2; })arg1 isMagicMove:(bool)arg2;
- (id)attributes;
- (id)backgroundColor;
- (void)bakeLayerWithAngle:(double)arg1 scale:(double)arg2;
- (double)bakedScale;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForStage:(long long)arg1 isBuildIn:(bool)arg2;
- (struct CGColorSpace { }*)colorSpace;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRect;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)drawFrameAtLayerTime:(double)arg1 context:(id)arg2;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frameOnCanvas;
- (bool)hasLiveTexturedRectangleSource;
- (struct CGImage { }*)image;
- (id)initWithCGImage:(struct CGImage { }*)arg1;
- (id)initWithLayer:(id)arg1;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 image:(struct CGImage { }*)arg2;
- (id)initWithSize:(struct CGSize { double x1; double x2; })arg1 offset:(struct CGPoint { double x1; double x2; })arg2 renderBlock:(id /* block */)arg3;
- (bool)isBackgroundTexture;
- (bool)isFlattened;
- (bool)isMetalTextureSetup;
- (bool)isRenderable;
- (bool)isVerticalText;
- (id)layer;
- (id)metalTexture;
- (id)metalTextureWithContext:(id)arg1;
- (struct CGPoint { double x1; double x2; })offset;
- (float)opacityFromAttributes;
- (struct CGPoint { double x1; double x2; })originalPosition;
- (id)p_allocateMetalTextureForDevice:(id)arg1;
- (id)p_allocateMetalTextureForDevice:(id)arg1 renderTarget:(bool)arg2 writable:(bool)arg3 private:(bool)arg4 maxSize:(struct CGSize { double x1; double x2; })arg5;
- (struct CGColorSpace { }*)p_colorSpace;
- (id)p_latestTextureNotAfterLayerTime:(double)arg1;
- (struct CGImage { }*)p_newImageAndBufferWithAngle:(double)arg1 scale:(double)arg2 offset:(struct CGPoint { double x1; double x2; })arg3;
- (char *)p_setupTextureDataWithSize:(struct CGSize { double x1; double x2; })arg1 isBGRA:(bool)arg2;
- (struct CGSize { double x1; double x2; })p_textureSizeWithDevice:(id)arg1 maxSize:(struct CGSize { double x1; double x2; })arg2;
- (id)parent;
- (id)parentLayer;
- (void)releaseMetalTexture;
- (void)releaseSingleTexture;
- (void)renderIntoContext:(struct CGContext { }*)arg1;
- (void)renderLayerContentsIfNeeded;
- (void)resetAnchorPoint;
- (void)resetToSourceImage;
- (void)setAttributes:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setFrameOnCanvas:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setIsFlattened:(bool)arg1;
- (void)setIsVerticalText:(bool)arg1;
- (void)setLiveTexturedRectangleSource:(id)arg1;
- (void)setLiveTexturedRectangleSourceProxy:(id)arg1;
- (void)setOffset:(struct CGPoint { double x1; double x2; })arg1;
- (void)setOriginalPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setParent:(id)arg1;
- (void)setShouldGenerateMipmap:(bool)arg1;
- (void)setShouldUseDisplayLinkPresentationTime:(bool)arg1;
- (void)setTags:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTextBaseline:(double)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTextXHeight:(double)arg1;
- (void)setTextureOpacity:(double)arg1;
- (void)setTextureType:(int)arg1;
- (void)setupMetalTextureForDevice:(id)arg1;
- (void)setupSingleTexture;
- (void)setupSingleTextureAndGenerateMipMaps:(bool)arg1;
- (bool)shouldGenerateMipmap;
- (bool)shouldUseDisplayLinkPresentationTime;
- (unsigned int)singleTextureName;
- (double)singleTextureOpacity;
- (unsigned int)singleTextureTarget;
- (struct CGSize { double x1; double x2; })size;
- (id)tags;
- (void)teardown;
- (id)text;
- (double)textBaseline;
- (id)textColor;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;
- (double)textXHeight;
- (double)textureOpacity;
- (int)textureType;
- (struct CATransform3D { double x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; double x9; double x10; double x11; double x12; double x13; double x14; double x15; double x16; })transformFromAttributes;

@end

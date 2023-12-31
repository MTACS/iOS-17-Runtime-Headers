
@interface TSDTextureSet : NSObject <NSCopying> {
    long long  _stageIndex;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  mActiveChunkIndices;
    NSMutableArray * mAllTextures;
    CALayer * mAlternateLayer;
    NSDictionary * mBakedAttributes;
    NSMutableDictionary * mBoundingRectForStage;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mBounds;
    struct CGPoint { 
        double x; 
        double y; 
    }  mCenter;
    unsigned long long  mChunkCount;
    struct CGColorSpace { } * mColorSpace;
    NSMutableDictionary * mContentRectForStage;
    NSMutableDictionary * mFinalTextureForStage;
    TSUNoCopyDictionary * mFinalTexturesToStageMap;
    bool  mIsBackground;
    bool  mIsBaked;
    bool  mIsMagicMove;
    CALayer * mLayer;
    long long  mMaxStageIndex;
    struct CGPoint { 
        double x; 
        double y; 
    }  mOriginalPosition;
    TSDRep * mRep;
    NSMutableDictionary * mReverseFinalTextureForStage;
    TSUNoCopyDictionary * mReverseFinalTexturesToStageMap;
    bool  mShouldIncludeFinalTexturesInVisibleSet;
    bool  mShouldTransformUsingTextureCenter;
    TSUNoCopyDictionary * mStageIndexForTexture;
    double  mTextureAngle;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  mTextureContentRect;
    double  mTextureOpacity;
    long long  mTextureZOrder;
    NSMutableArray * mTextures;
}

@property (nonatomic, readonly) NSArray *allTextures;
@property (nonatomic, retain) CALayer *alternateLayer;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } boundingRect;
@property (nonatomic, retain) NSDictionary *boundingRectForStage;
@property (nonatomic) struct CGPoint { double x1; double x2; } center;
@property (nonatomic, readonly) unsigned long long chunkCount;
@property (nonatomic) struct CGColorSpace { }*colorSpace;
@property (nonatomic, retain) NSDictionary *contentRectForStage;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic) bool isBackground;
@property (nonatomic) bool isBaked;
@property (nonatomic) bool isMagicMove;
@property (nonatomic, readonly) bool isRenderable;
@property (nonatomic, readonly) CALayer *layer;
@property (nonatomic, readonly) long long maxStageIndex;
@property (nonatomic) struct CGPoint { double x1; double x2; } originalPosition;
@property TSDRep *rep;
@property (nonatomic) bool shouldIncludeFinalTexturesInVisibleSet;
@property (nonatomic) bool shouldTransformUsingTextureCenter;
@property (nonatomic, readonly) long long stageIndex;
@property (nonatomic) double textureAngle;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } textureContentRect;
@property (nonatomic) double textureOpacity;
@property (nonatomic) long long textureZOrder;
@property (nonatomic, readonly) NSArray *visibleTextures;

- (void)addFinalTexture:(id)arg1 forStage:(long long)arg2 reverse:(bool)arg3;
- (void)addPerspectiveLayerToTexture:(id)arg1 withShowSize:(struct CGSize { double x1; double x2; })arg2;
- (void)addRenderable:(id)arg1;
- (void)addRenderable:(id)arg1 forStage:(long long)arg2;
- (void)adjustAnchorPointRelativeToCenterOfRotation;
- (id)allTextures;
- (id)alternateLayer;
- (void)applyActionEffect:(id)arg1 viewScale:(double)arg2 isMagicMove:(bool)arg3 shouldBake:(bool)arg4 applyScaleOnly:(bool)arg5 ignoreScale:(bool)arg6 shouldCheckActionKeys:(bool)arg7;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRect;
- (id)boundingRectForStage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingRectForStage:(long long)arg1 isBuildIn:(bool)arg2;
- (struct CGPoint { double x1; double x2; })center;
- (unsigned long long)chunkCount;
- (struct CGColorSpace { }*)colorSpace;
- (id)contentRectForStage;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })contentRectForStage:(long long)arg1 isBuildIn:(bool)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)finalTextureForStage:(long long)arg1 reverse:(bool)arg2;
- (id)firstVisibleTextureForTextureType:(int)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)hideLayersOfFinalTextures;
- (id)init;
- (bool)isBackground;
- (bool)isBackgroundTexture:(id)arg1;
- (bool)isBaked;
- (bool)isMagicMove;
- (bool)isRenderable;
- (id)layer;
- (long long)maxStageIndex;
- (id)newFlattenedTexture;
- (id)newFlattenedTextureFromTextures:(id)arg1 newRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (struct CGPoint { double x1; double x2; })originalPosition;
- (void)p_applyPositionFromAttributes:(id)arg1 viewScale:(double)arg2;
- (void)p_resetAttributesWithViewScale:(double)arg1;
- (void)releaseSingleTextures;
- (void)removeRenderable:(id)arg1;
- (void)renderIntoContext:(struct CGContext { }*)arg1;
- (void)renderLayerContentsIfNeeded;
- (id)rep;
- (void)resetAnchorPoint;
- (void)setAlternateLayer:(id)arg1;
- (void)setBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setBoundingRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forStage:(long long)arg2;
- (void)setBoundingRectForStage:(id)arg1;
- (void)setCenter:(struct CGPoint { double x1; double x2; })arg1;
- (void)setColorSpace:(struct CGColorSpace { }*)arg1;
- (void)setContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 forStage:(long long)arg2;
- (void)setContentRectForStage:(id)arg1;
- (void)setIsBackground:(bool)arg1;
- (void)setIsBaked:(bool)arg1;
- (void)setIsMagicMove:(bool)arg1;
- (void)setLayerGeometryFromRep:(id)arg1;
- (void)setOriginalPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRep:(id)arg1;
- (void)setShouldIncludeFinalTexturesInVisibleSet:(bool)arg1;
- (void)setShouldTransformUsingTextureCenter:(bool)arg1;
- (void)setTextureAngle:(double)arg1;
- (void)setTextureContentRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTextureOpacity:(double)arg1;
- (void)setTextureZOrder:(long long)arg1;
- (bool)shouldIncludeFinalTexturesInVisibleSet;
- (bool)shouldTransformUsingTextureCenter;
- (long long)stageIndex;
- (long long)stageIndexForTexture:(id)arg1;
- (void)teardown;
- (double)textureAngle;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })textureContentRect;
- (double)textureOpacity;
- (long long)textureZOrder;
- (id)visibleTextures;
- (id)visibleTexturesForStage:(long long)arg1 isBuildIn:(bool)arg2 shouldFlatten:(bool)arg3;

@end

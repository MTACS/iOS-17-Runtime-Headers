
@interface AVTStickerProp : NSObject <NSCopying> {
    NSArray * _adjustments;
    SCNNode * _node;
    double  _opacity;
    bool  _orientToCamera;
    NSString * _originalName;
    NSArray * _palettesDescriptions;
    void _position;
    bool  _renderLast;
    void _rotation;
    void _scale;
    NSArray * _shaderModifiers;
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (nonatomic, readonly) NSArray *adjustments;
@property (nonatomic, readonly, copy) NSString *displayName;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, retain) SCNNode *node;
@property (nonatomic, readonly) NSString *nodeName;
@property (nonatomic) double opacity;
@property (nonatomic, readonly) bool orientToCamera;
@property (nonatomic, copy) NSString *originalName;
@property (nonatomic, readonly) NSArray *palettesDescriptions;
@property (nonatomic) void position;
@property (nonatomic, readonly) bool renderLast;
@property (nonatomic) void rotation;
@property (nonatomic) void scale;
@property (nonatomic, copy) NSArray *shaderModifiers;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } size;

+ (id)adjustmentFromDictionary:(id)arg1 presetCategory:(id)arg2;
+ (void)applyPalettesForAvatar:(id)arg1 toNode:(id)arg2 palettesDescriptions:(id)arg3;
+ (id)cacheKeyForSize:(void *)arg1 position:(void *)arg2 rotation:(void *)arg3 scale:(void *)arg4 palettesDescriptions:(void *)arg5 filePath:(void *)arg6; // needs 6 arg types, found 3: struct CGSize { double x1; double x2; }, id, id
+ (float)getOpacityInDictionary:(id)arg1;
+ (bool)getOrientToCameraInDictionary:(id)arg1;
+ (void)getPositionInDictionary:(id)arg1;
+ (bool)getRenderLastInDictionary:(id)arg1;
+ (void)getRotationInDictionary:(id)arg1;
+ (void)getScaleInDictionary:(id)arg1;
+ (struct CGSize { double x1; double x2; })getSizeInDictionary:(id)arg1;
+ (id)propFromDictionary:(id)arg1 assetsPath:(id)arg2;
+ (id)stickerPropCache;

- (void).cxx_destruct;
- (id)adjustments;
- (void)applyCamera:(id)arg1 toNode:(id)arg2 distToHead:(double)arg3;
- (void)buildNodeForAvatar:(id)arg1 withCamera:(id)arg2 options:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)cloneWithShaderModifiers:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryWithTargetPath:(id)arg1;
- (id)displayName;
- (id)identifier;
- (id)initWithSize:(void *)arg1 scale:(void *)arg2 position:(void *)arg3 renderLast:(void *)arg4 orientToCamera:(void *)arg5 rotation:(void *)arg6 palettesDescriptions:(void *)arg7 shaderModifiers:(void *)arg8 adjustments:(void *)arg9; // needs 9 arg types, found 6: struct CGSize { double x1; double x2; }, bool, bool, id, id, id
- (id)node;
- (id)nodeName;
- (double)opacity;
- (bool)orientToCamera;
- (id)originalName;
- (id)palettesDescriptions;
- (void)position;
- (bool)renderLast;
- (void)rotation;
- (void)scale;
- (void)setNode:(id)arg1;
- (void)setOpacity:(double)arg1;
- (void)setOriginalName:(id)arg1;
- (void)setPosition;
- (void)setRotation;
- (void)setScale;
- (void)setShaderModifiers:(id)arg1;
- (id)shaderModifiers;
- (struct CGSize { double x1; double x2; })size;
- (void)stickerGenerationDidEnd;
- (void)stickerGenerationWillBegin;
- (void)updateNode:(id)arg1 withContentAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (bool)wantsTimedUpdates;

@end

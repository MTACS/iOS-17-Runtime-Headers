
@interface TSDTextureContext : NSObject <NSCopying> {
    bool  _isMagicMove;
    <TSDAnimationSession> * _session;
    bool  _shouldAddFinal;
    bool  _shouldAddMagicMoveObjectOnly;
    bool  _shouldAddNoShapeAttributes;
    bool  _shouldAddReversedFinal;
    bool  _shouldDistortToFit;
    bool  _shouldForceTextureGeneration;
    bool  _shouldNotAddContainedReps;
    bool  _shouldNotAddShapeAttributes;
    bool  _shouldNotAddText;
    bool  _shouldNotCacheTexture;
    bool  _shouldSeparateReflection;
    bool  _shouldSeparateShadow;
    bool  _shouldSeparateStroke;
    bool  _shouldSeparateText;
}

@property (nonatomic) bool isMagicMove;
@property (nonatomic) <TSDAnimationSession> *session;
@property (nonatomic) bool shouldAddFinal;
@property (nonatomic) bool shouldAddMagicMoveObjectOnly;
@property (nonatomic) bool shouldAddReversedFinal;
@property (nonatomic) bool shouldDistortToFit;
@property (nonatomic) bool shouldForceTextureGeneration;
@property (nonatomic) bool shouldNotAddContainedReps;
@property (nonatomic) bool shouldNotAddShapeAttributes;
@property (nonatomic) bool shouldNotAddText;
@property (nonatomic) bool shouldNotCacheTexture;
@property (nonatomic) bool shouldSeparateReflection;
@property (nonatomic) bool shouldSeparateShadow;
@property (nonatomic) bool shouldSeparateStroke;
@property (nonatomic) bool shouldSeparateText;

+ (id)context;
+ (id)contextWithSession:(id)arg1;
+ (id)contextWithTextureContext:(id)arg1;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isMagicMove;
- (void)reset;
- (id)session;
- (void)setIsMagicMove:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setShouldAddFinal:(bool)arg1;
- (void)setShouldAddMagicMoveObjectOnly:(bool)arg1;
- (void)setShouldAddReversedFinal:(bool)arg1;
- (void)setShouldDistortToFit:(bool)arg1;
- (void)setShouldForceTextureGeneration:(bool)arg1;
- (void)setShouldNotAddContainedReps:(bool)arg1;
- (void)setShouldNotAddShapeAttributes:(bool)arg1;
- (void)setShouldNotAddText:(bool)arg1;
- (void)setShouldNotCacheTexture:(bool)arg1;
- (void)setShouldSeparateReflection:(bool)arg1;
- (void)setShouldSeparateShadow:(bool)arg1;
- (void)setShouldSeparateStroke:(bool)arg1;
- (void)setShouldSeparateText:(bool)arg1;
- (bool)shouldAddFinal;
- (bool)shouldAddMagicMoveObjectOnly;
- (bool)shouldAddReversedFinal;
- (bool)shouldDistortToFit;
- (bool)shouldForceTextureGeneration;
- (bool)shouldNotAddContainedReps;
- (bool)shouldNotAddShapeAttributes;
- (bool)shouldNotAddText;
- (bool)shouldNotCacheTexture;
- (bool)shouldSeparateReflection;
- (bool)shouldSeparateShadow;
- (bool)shouldSeparateStroke;
- (bool)shouldSeparateText;

@end
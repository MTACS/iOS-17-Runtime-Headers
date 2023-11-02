
@interface ARUIRing : NSObject <NSCopying> {
    UIColor * _bottomColor;
    void _bottomColorPremultipliedVector;
    void _bottomColorVector;
    ARUICelebration * _celebration;
    float  _diameter;
    float  _emptyOpacity;
    float  _opacity;
    float  _percentage;
    float  _scale;
    float  _thickness;
    UIColor * _topColor;
    void _topColorPremultipliedVector;
    void _topColorVector;
    float  _trackOpacity;
    void _translation;
    float  _zRotation;
}

@property (nonatomic, retain) UIColor *bottomColor;
@property (nonatomic, readonly) void bottomColorPremultipliedVector;
@property (nonatomic, readonly) void bottomColorVector;
@property (nonatomic, retain) ARUICelebration *celebration;
@property (nonatomic) float diameter;
@property (nonatomic) float emptyOpacity;
@property (nonatomic) float opacity;
@property (nonatomic) float percentage;
@property (nonatomic) float scale;
@property (nonatomic) float thickness;
@property (nonatomic, retain) UIColor *topColor;
@property (nonatomic, readonly) void topColorPremultipliedVector;
@property (nonatomic, readonly) void topColorVector;
@property (nonatomic) float trackOpacity;
@property (nonatomic) void translation;
@property (nonatomic) float zRotation;

+ (id)randomRing;

- (void).cxx_destruct;
- (void)_updatePremultipliedBottomColor;
- (void)_updatePremultipliedTopColor;
- (id)bottomColor;
- (void)bottomColorPremultipliedVector;
- (void)bottomColorVector;
- (id)celebration;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (float)diameter;
- (float)emptyOpacity;
- (unsigned long long)hash;
- (id)init;
- (id)initWithRing:(id)arg1;
- (bool)isEqual:(id)arg1;
- (float)opacity;
- (float)percentage;
- (float)scale;
- (void)setBottomColor:(id)arg1;
- (void)setCelebration:(id)arg1;
- (void)setDiameter:(float)arg1;
- (void)setEmptyOpacity:(float)arg1;
- (void)setOpacity:(float)arg1;
- (void)setPercentage:(float)arg1;
- (void)setScale:(float)arg1;
- (void)setThickness:(float)arg1;
- (void)setTopColor:(id)arg1;
- (void)setTrackOpacity:(float)arg1;
- (void)setTranslation;
- (void)setZRotation:(float)arg1;
- (float)thickness;
- (id)topColor;
- (void)topColorPremultipliedVector;
- (void)topColorVector;
- (float)trackOpacity;
- (void)translation;
- (float)zRotation;

@end

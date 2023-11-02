
@interface OUConfiguration : NSObject <NSCopying> {
    bool  enable3DOR;
    bool  enableMLRefinement;
    bool  enableRgbRefinement;
    float  maxFramerate;
}

@property (nonatomic) bool enable3DOR;
@property (nonatomic) bool enableMLRefinement;
@property (nonatomic) bool enableRgbRefinement;
@property (nonatomic) float maxFramerate;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)enable3DOR;
- (bool)enableMLRefinement;
- (bool)enableRgbRefinement;
- (id)init;
- (id)initWithframerate:(float)arg1 enable3DOR:(bool)arg2 rgbRefinemnt:(bool)arg3 mlRefinement:(bool)arg4;
- (float)maxFramerate;
- (void)setEnable3DOR:(bool)arg1;
- (void)setEnableMLRefinement:(bool)arg1;
- (void)setEnableRgbRefinement:(bool)arg1;
- (void)setMaxFramerate:(float)arg1;

@end

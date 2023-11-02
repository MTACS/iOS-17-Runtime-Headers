
@interface SKAnimate : SKAction {
    void * _mycaction;
    NSArray * _textures;
}

@property (nonatomic) double timePerFrame;

+ (id)animateWithNormalTextures:(id)arg1 timePerFrame:(double)arg2 resize:(bool)arg3 restore:(bool)arg4;
+ (id)animateWithTextures:(id)arg1 timePerFrame:(double)arg2 resize:(bool)arg3 restore:(bool)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)reversedAction;
- (void)setDuration:(double)arg1;
- (void)setTimePerFrame:(double)arg1;
- (double)timePerFrame;

@end

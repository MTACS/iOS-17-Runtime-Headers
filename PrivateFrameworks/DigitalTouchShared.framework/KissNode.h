
@interface KissNode : NSObject {
    long long  _blendMode;
    UIColor * _color;
    double  _colorBlendFactor;
    bool  _leavesMark;
    SKSpriteNode * _node;
    struct CGPoint { 
        double x; 
        double y; 
    }  _position;
    SKShader * _shader;
    double  _zRotation;
}

@property (nonatomic) long long blendMode;
@property (nonatomic, retain) UIColor *color;
@property (nonatomic) double colorBlendFactor;
@property (nonatomic) bool leavesMark;
@property (nonatomic, retain) SKSpriteNode *node;
@property (nonatomic) struct CGPoint { double x1; double x2; } position;
@property (nonatomic, retain) SKShader *shader;
@property (nonatomic) double zRotation;

+ (id)kissNodeWithColor:(id)arg1 size:(struct CGSize { double x1; double x2; })arg2;

- (void).cxx_destruct;
- (long long)blendMode;
- (id)color;
- (double)colorBlendFactor;
- (bool)leavesMark;
- (id)node;
- (struct CGPoint { double x1; double x2; })position;
- (void)removeFromParent;
- (void)runAction:(id)arg1;
- (void)setBlendMode:(long long)arg1;
- (void)setColor:(id)arg1;
- (void)setColorBlendFactor:(double)arg1;
- (void)setColorBlendMode:(long long)arg1;
- (void)setLeavesMark:(bool)arg1;
- (void)setNode:(id)arg1;
- (void)setPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScale:(double)arg1;
- (void)setShader:(id)arg1;
- (void)setZRotation:(double)arg1;
- (id)shader;
- (double)zRotation;

@end

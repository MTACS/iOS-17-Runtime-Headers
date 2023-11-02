
@interface SK3DNode : SKNode {
    void * _skc3DNode;
}

@property (nonatomic) bool autoenablesDefaultLighting;
@property (nonatomic) bool loops;
@property (getter=isPlaying) bool playing;
@property (nonatomic, retain) SCNNode *pointOfView;
@property (nonatomic) double sceneTime;
@property (nonatomic, retain) SCNScene *scnScene;
@property struct CGSize { double x1; double x2; } viewportSize;

+ (id)nodeWithViewportSize:(struct CGSize { double x1; double x2; })arg1;
+ (bool)supportsSecureCoding;

- (void)_didMakeBackingNode;
- (void*)_makeBackingNode;
- (void)_renderForTime:(double)arg1;
- (void)_scnSceneDidUpdate:(id)arg1;
- (bool)autoenablesDefaultLighting;
- (void)commonInit;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hitTest:(struct CGPoint { double x1; double x2; })arg1 options:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (bool)isPlaying;
- (bool)loops;
- (id)pointOfView;
- (void)projectPoint;
- (double)sceneTime;
- (id)scnScene;
- (void)setAutoenablesDefaultLighting:(bool)arg1;
- (void)setLoops:(bool)arg1;
- (void)setPlaying:(bool)arg1;
- (void)setPointOfView:(id)arg1;
- (void)setSceneTime:(double)arg1;
- (void)setScnScene:(id)arg1;
- (void)setViewportSize:(struct CGSize { double x1; double x2; })arg1;
- (void)unprojectPoint;
- (struct CGSize { double x1; double x2; })viewportSize;

@end


@interface OZJSElement : NSObject <OZElementJSExport> {
    void * _element;
    float  _time;
}

@property (nonatomic) void*element;
@property (nonatomic) float time;

+ (id)elementWithElement:(void*)arg1;

- (unsigned int)ID;
- (void)clone;
- (void)cloneAtTime:(float)arg1;
- (void)disable;
- (void*)element;
- (void)enable;
- (id)getBehaviorWithName:(id)arg1;
- (float)getEndTime;
- (struct SCNVector3 { float x1; float x2; float x3; })getPosition;
- (struct SCNVector3 { float x1; float x2; float x3; })getPositionAtTime:(float)arg1;
- (float)getStartTime;
- (id)initWithElement:(void*)arg1;
- (id)name;
- (void)setElement:(void*)arg1;
- (void)setPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setRotation;
- (void)setStartTime:(float)arg1;
- (void)setTime:(float)arg1;
- (float)time;

@end

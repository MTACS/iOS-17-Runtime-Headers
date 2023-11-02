
@protocol OZElementJSExport <JSExport>

@required

- (unsigned int)ID;
- (void)clone;
- (void)cloneAtTime:(float)arg1;
- (void)disable;
- (void)enable;
- (OZJSBehavior *)getBehaviorWithName:(NSString *)arg1;
- (float)getEndTime;
- (struct SCNVector3 { float x1; float x2; float x3; })getPosition;
- (struct SCNVector3 { float x1; float x2; float x3; })getPositionAtTime:(float)arg1;
- (float)getStartTime;
- (NSString *)name;
- (void)setPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
- (void)setStartTime:(float)arg1;
- (void)setTime:(float)arg1;
- (float)time;

@end

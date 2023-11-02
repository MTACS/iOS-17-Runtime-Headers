
@protocol OZ3DElementJSExport <JSExport>

@required

- (void)applyColorR:(float)arg1 g:(float)arg2 b:(float)arg3;
- (void)applyContourToMotionPath:(struct SCNVector3 { float x1; float x2; float x3; })arg1 vertically:(bool)arg2 direction:(float)arg3 rotation:(float)arg4 addStart:(bool)arg5 addEnd:(bool)arg6;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })floorPosition:(SCNScene *)arg1 atTime:(float)arg2;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })floorPosition:(SCNScene *)arg1 beneath:(struct SCNVector3 { float x1; float x2; float x3; })arg2;
- (void)placeOnFloorRelativeTo:(int)arg1 inScene:(SCNScene *)arg2 faceCamera:(bool)arg3;
- (void)placeRelativeTo:(int)arg1 inScene:(SCNScene *)arg2 alignment:(int)arg3 distance:(float)arg4 faceCamera:(bool)arg5 preserveY:(bool)arg6 time:(float)arg7;
- (void)setColor:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1 forShaderParameterWithName:(NSString *)arg2;
- (void)setPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1 forShaderParameterWithName:(NSString *)arg2;

@end

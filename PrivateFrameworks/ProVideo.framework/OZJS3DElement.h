
@interface OZJS3DElement : OZJSElement <OZ3DElementJSExport> {
    void * _tdElement;
}

@property (nonatomic) void*tdElement;

+ (id)elementWith3DElement:(void*)arg1;

- (void)applyColorR:(float)arg1 g:(float)arg2 b:(float)arg3;
- (void)applyContourToMotionPath:(struct SCNVector3 { float x1; float x2; float x3; })arg1 vertically:(bool)arg2 direction:(float)arg3 rotation:(float)arg4 addStart:(bool)arg5 addEnd:(bool)arg6;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })floorPosition:(id)arg1 atTime:(float)arg2;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })floorPosition:(id)arg1 beneath:(struct SCNVector3 { float x1; float x2; float x3; })arg2;
- (id)initWith3DElement:(void*)arg1;
- (void)placeOnFloorRelativeTo:(int)arg1 inScene:(id)arg2 faceCamera:(bool)arg3;
- (void)placeRelativeTo:(int)arg1 inScene:(id)arg2 alignment:(int)arg3 distance:(float)arg4 faceCamera:(bool)arg5 preserveY:(bool)arg6 time:(float)arg7;
- (void)setColor:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1 forShaderParameterWithName:(id)arg2;
- (void)setPosition:(struct SCNVector3 { float x1; float x2; float x3; })arg1 forShaderParameterWithName:(id)arg2;
- (void)setTdElement:(void*)arg1;
- (void*)tdElement;

@end

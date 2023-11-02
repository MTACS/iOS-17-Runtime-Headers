
@interface SCNJSValue : NSValue

+ (id)SCNJSExportProtocol;
+ (id)valueWithMatrix4:(struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })arg1;
+ (id)valueWithVector3:(struct SCNVector3 { float x1; float x2; float x3; })arg1;
+ (id)valueWithVector4:(struct SCNVector4 { float x1; float x2; float x3; float x4; })arg1;

- (struct SCNMatrix4 { float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; float x15; float x16; })matrix4;
- (struct SCNVector3 { float x1; float x2; float x3; })vector3;
- (struct SCNVector4 { float x1; float x2; float x3; float x4; })vector4;

@end


@protocol TSCH3DFillData

@required

- (struct Color { float x1; float x2; float x3; float x4; })diffuse;
- (struct Color { float x1; float x2; float x3; float x4; })emissive;
- (float)opacity;
- (float)shininess;
- (struct Color { float x1; float x2; float x3; float x4; })specular;

@end


@interface ARSCNFaceGeometry : SCNGeometry {
    <MTLBuffer> * _normalBuffer;
    <MTLBuffer> * _textureBuffer;
    <MTLBuffer> * _vertexBuffer;
}

@property (nonatomic, retain) <MTLBuffer> *normalBuffer;
@property (nonatomic, retain) <MTLBuffer> *textureBuffer;
@property (nonatomic, retain) <MTLBuffer> *vertexBuffer;

+ (id)faceGeometryWithDevice:(id)arg1;
+ (id)faceGeometryWithDevice:(id)arg1 eyesFilled:(bool)arg2 mouthFilled:(bool)arg3;
+ (id)faceGeometryWithDevice:(id)arg1 fillMesh:(bool)arg2;

- (void).cxx_destruct;
- (id)normalBuffer;
- (void)setNormalBuffer:(id)arg1;
- (void)setTextureBuffer:(id)arg1;
- (void)setVertexBuffer:(id)arg1;
- (id)textureBuffer;
- (void)updateFromFaceGeometry:(id)arg1;
- (id)vertexBuffer;

@end

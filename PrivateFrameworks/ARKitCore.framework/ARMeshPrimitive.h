
@interface ARMeshPrimitive : NSObject {
    <MTLBuffer> * _indexBuffer;
    unsigned long long  _nIndices;
    unsigned long long  _nVertices;
    <MTLTexture> * _texture;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform_world_from_primitive;
    <MTLBuffer> * _uvBuffer;
    <MTLBuffer> * _vertexBuffer;
}

@property (readonly) <MTLBuffer> *indexBuffer;
@property (readonly) unsigned long long nIndices;
@property (readonly) unsigned long long nVertices;
@property (readonly) <MTLTexture> *texture;
@property (readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform_world_from_primitive;
@property (readonly) <MTLBuffer> *uvBuffer;
@property (readonly) <MTLBuffer> *vertexBuffer;

+ (id)planeWithTransform:(void *)arg1 min:(void *)arg2 max:(void *)arg3 texture:(void *)arg4; // needs 4 arg types, found 2: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, id

- (void).cxx_destruct;
- (id)indexBuffer;
- (id)initAsPlaneWithTransform:(void *)arg1 min:(void *)arg2 max:(void *)arg3 texture:(void *)arg4; // needs 4 arg types, found 2: struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; }, id
- (unsigned long long)nIndices;
- (unsigned long long)nVertices;
- (id)texture;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform_world_from_primitive;
- (id)uvBuffer;
- (id)vertexBuffer;

@end


@interface ARUIRingUniforms : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*color1; 
    }  _uniforms;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } transformMatrix[2]; 
    }  _vertexAttributes;
}

@property (nonatomic, readonly) struct { } uniforms;
@property (nonatomic, readonly) struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1[2]; } vertexAttributes;

- (void)_updateUniformsWithRing:(id)arg1 inContext:(id)arg2;
- (void)_updateVertexAttributesWithRing:(id)arg1 inContext:(id)arg2;
- (id)initWithRing:(id)arg1 inContext:(id)arg2;
- (struct { })uniforms;
- (void*)uniformsBytes;
- (struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1[2]; })vertexAttributes;
- (void*)vertexAttributesBytes;

@end

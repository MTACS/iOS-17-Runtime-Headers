
@interface ARUISpriteUniforms : NSObject {
    struct { 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*textureRect; 
    }  _uniforms;
    struct { 
        struct { 
            /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
        } transformMatrix; 
    }  _vertexAttributes;
}

@property (nonatomic, readonly) struct { float x1; } uniforms;
@property (nonatomic, readonly) struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; } vertexAttributes;

- (void)_updateUniformsWithSprite:(id)arg1;
- (void)_updateVertexAttributesWithSprite:(id)arg1 inContet:(id)arg2;
- (id)initWithSprite:(id)arg1 inContext:(id)arg2;
- (struct { float x1; })uniforms;
- (void*)uniformsBytes;
- (struct { struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_1_1_1[4]; } x1; })vertexAttributes;
- (void*)vertexAttributesBytes;

@end

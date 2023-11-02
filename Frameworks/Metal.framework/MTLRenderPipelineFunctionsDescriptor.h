
@interface MTLRenderPipelineFunctionsDescriptor : NSObject <NSCopying> {
    NSArray * _fragmentAdditionalBinaryFunctions;
    NSArray * _meshAdditionalBinaryFunctions;
    NSArray * _objectAdditionalBinaryFunctions;
    NSArray * _tileAdditionalBinaryFunctions;
    NSArray * _vertexAdditionalBinaryFunctions;
}

@property (nonatomic, copy) NSArray *fragmentAdditionalBinaryFunctions;
@property (nonatomic, copy) NSArray *meshAdditionalBinaryFunctions;
@property (nonatomic, copy) NSArray *objectAdditionalBinaryFunctions;
@property (nonatomic, copy) NSArray *tileAdditionalBinaryFunctions;
@property (nonatomic, copy) NSArray *vertexAdditionalBinaryFunctions;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)fragmentAdditionalBinaryFunctions;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)meshAdditionalBinaryFunctions;
- (id)objectAdditionalBinaryFunctions;
- (void)setFragmentAdditionalBinaryFunctions:(id)arg1;
- (void)setMeshAdditionalBinaryFunctions:(id)arg1;
- (void)setObjectAdditionalBinaryFunctions:(id)arg1;
- (void)setTileAdditionalBinaryFunctions:(id)arg1;
- (void)setVertexAdditionalBinaryFunctions:(id)arg1;
- (id)tileAdditionalBinaryFunctions;
- (id)vertexAdditionalBinaryFunctions;

@end

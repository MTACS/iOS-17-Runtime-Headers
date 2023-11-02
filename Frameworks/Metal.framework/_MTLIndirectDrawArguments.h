
@interface _MTLIndirectDrawArguments : NSObject {
    unsigned long long  _baseInstance;
    unsigned long long  _instanceCount;
    unsigned long long  _primitiveType;
    unsigned long long  _vertexCount;
    unsigned long long  _vertexStart;
}

@property (nonatomic) unsigned long long baseInstance;
@property (nonatomic) unsigned long long instanceCount;
@property (nonatomic) unsigned long long primitiveType;
@property (nonatomic) unsigned long long vertexCount;
@property (nonatomic) unsigned long long vertexStart;

- (unsigned long long)baseInstance;
- (unsigned long long)instanceCount;
- (unsigned long long)primitiveType;
- (void)setBaseInstance:(unsigned long long)arg1;
- (void)setInstanceCount:(unsigned long long)arg1;
- (void)setPrimitiveType:(unsigned long long)arg1;
- (void)setVertexCount:(unsigned long long)arg1;
- (void)setVertexStart:(unsigned long long)arg1;
- (unsigned long long)vertexCount;
- (unsigned long long)vertexStart;

@end


@interface GLKSubmesh : NSObject {
    GLKMeshBuffer * _elementBuffer;
    int  _elementCount;
    GLKMesh * _mesh;
    unsigned int  _mode;
    NSString * _name;
    unsigned int  _type;
}

@property (nonatomic, readonly) GLKMeshBuffer *elementBuffer;
@property (nonatomic, readonly) int elementCount;
@property (nonatomic, readonly) GLKMesh *mesh;
@property (nonatomic, readonly) unsigned int mode;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) unsigned int type;

- (void).cxx_destruct;
- (id)elementBuffer;
- (int)elementCount;
- (id)initWithMesh:(id)arg1 submesh:(id)arg2 error:(id*)arg3;
- (id)mesh;
- (unsigned int)mode;
- (id)name;
- (unsigned int)type;

@end

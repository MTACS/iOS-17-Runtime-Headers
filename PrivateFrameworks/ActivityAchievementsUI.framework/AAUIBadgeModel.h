
@interface AAUIBadgeModel : NSObject {
    int  _groupCount;
    int * _groups;
    int  _indexCount;
    unsigned int * _indices;
    int * _materials;
    int  _vertexCount;
    struct { struct aaui_packed_float3 { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct aaui_packed_float3 { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; } * _vertices;
}

@property (nonatomic) int groupCount;
@property (nonatomic) int*groups;
@property (nonatomic) int indexCount;
@property (nonatomic) unsigned int*indices;
@property (nonatomic) int*materials;
@property (nonatomic) int vertexCount;
@property (nonatomic) struct { struct aaui_packed_float3 { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct aaui_packed_float3 { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*vertices;

- (void)_loadModelAtPath:(id)arg1 intoVertices:(struct { /* ? */ }**)arg2 indices:(unsigned int**)arg3 groups:(int**)arg4 materials:(int**)arg5 vertexCount:(int*)arg6 indexCount:(int*)arg7 groupCount:(int*)arg8;
- (void)dealloc;
- (int)groupCount;
- (int*)groups;
- (int)indexCount;
- (unsigned int*)indices;
- (id)initWithPath:(id)arg1;
- (int*)materials;
- (void)setGroupCount:(int)arg1;
- (void)setGroups:(int*)arg1;
- (void)setIndexCount:(int)arg1;
- (void)setIndices:(unsigned int*)arg1;
- (void)setMaterials:(int*)arg1;
- (void)setVertexCount:(int)arg1;
- (void)setVertices:(struct { struct aaui_packed_float3 { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct aaui_packed_float3 { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)arg1;
- (int)vertexCount;
- (struct { struct aaui_packed_float3 { float x_1_1_1; float x_1_1_2; float x_1_1_3; } x1; struct aaui_packed_float3 { float x_2_1_1; float x_2_1_2; float x_2_1_3; } x2; }*)vertices;

@end

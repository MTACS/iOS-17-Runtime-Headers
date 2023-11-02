
@interface REMeshInstanceDescriptor : NSObject <NSSecureCoding> {
    struct REMeshLodSelectOptions { 
        struct MeshLodSelectOptions { 
            int strategy; 
            bool crossFade; 
            float crossFadeInterval; 
            float bias; 
            float throttleBias; 
        } options; 
    }  _lodSelectOptions;
    unsigned int  _modelIndex;
    NSString * _name;
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _transform;
}

@property (nonatomic, readonly) struct REMeshLodSelectOptions { struct MeshLodSelectOptions { int x_1_1_1; bool x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; } x1; } lodSelectOptions;
@property (nonatomic, readonly) unsigned int modelIndex;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } transform;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMeshAssetInstance:(const void*)arg1;
- (id)initWithName:(id)arg1 modelIndex:(unsigned int)arg2 transform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg3 lodSelectOptions:(struct REMeshLodSelectOptions { struct MeshLodSelectOptions { int x_1_1_1; bool x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; } x1; })arg4;
- (struct REMeshLodSelectOptions { struct MeshLodSelectOptions { int x_1_1_1; bool x_1_1_2; float x_1_1_3; float x_1_1_4; float x_1_1_5; } x1; })lodSelectOptions;
- (struct MeshInstance { struct StringID { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 63; } x_1_1_1; char *x_1_1_2; } x1; struct DataArrayHandle<re::MeshModel> { struct ElementPointer { unsigned short x_1_2_1; unsigned short x_1_2_2; } x_2_1_1; unsigned int x_2_1_2 : 24; unsigned int x_2_1_3 : 8; } x2; struct MeshLodSelectOptions { int x_3_1_1; bool x_3_1_2; float x_3_1_3; float x_3_1_4; float x_3_1_5; } x3; struct Matrix4x4<float> { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; float x_1_3_5; float x_1_3_6; float x_1_3_7; float x_1_3_8; float x_1_3_9; float x_1_3_10; float x_1_3_11; float x_1_3_12; float x_1_3_13; float x_1_3_14; float x_1_3_15; float x_1_3_16; } x_1_2_1; struct float4x4 { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_2_3_1[4]; void*x_2_3_2; } x_1_2_2; struct Vector4<float> { union { struct { float x_1_5_1; float x_1_5_2; float x_1_5_3; float x_1_5_4; } x_1_4_1; float x_1_4_2[4]; } x_3_3_1; } x_1_2_3; struct Vector4<float> { union { struct { float x_1_5_1; float x_1_5_2; float x_1_5_3; float x_1_5_4; } x_1_4_1; float x_1_4_2[4]; } x_4_3_1; } x_1_2_4; struct Vector4<float> { union { struct { float x_1_5_1; float x_1_5_2; float x_1_5_3; float x_1_5_4; } x_1_4_1; float x_1_4_2[4]; } x_5_3_1; } x_1_2_5; void*x_1_2_6; struct Vector4<float> { union { struct { float x_1_5_1; float x_1_5_2; float x_1_5_3; float x_1_5_4; } x_1_4_1; float x_1_4_2[4]; } x_7_3_1; } x_1_2_7[4]; float x_1_2_8[4][4]; } x_4_1_1; } x4; })meshInstanceWithModels:(const void*)arg1 meshManager:(void*)arg2;
- (unsigned int)modelIndex;
- (id)name;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })transform;
- (bool)validateWithModelCount:(unsigned long long)arg1 error:(id*)arg2;

@end

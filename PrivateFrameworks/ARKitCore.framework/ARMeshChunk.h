
@interface ARMeshChunk : NSObject {
    void _chunkID;
    struct ChunkMesh { 
        struct Matrix<short, 3U, 1U, false> { 
            short m_data[3]; 
        } chunk_position; 
        struct TriMesh<float, unsigned int> { 
            struct vector<cva::Matrix<float, 3, 1>, std::allocator<cva::Matrix<float, 3, 1>>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<cva::Matrix<float, 3, 1> *, std::allocator<cva::Matrix<float, 3, 1>>> { 
                    void *__value_; 
                } __end_cap_; 
            } vertices; 
            struct vector<cva::Matrix<float, 3, 1>, std::allocator<cva::Matrix<float, 3, 1>>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<cva::Matrix<float, 3, 1> *, std::allocator<cva::Matrix<float, 3, 1>>> { 
                    void *__value_; 
                } __end_cap_; 
            } colors; 
            struct vector<cva::Matrix<float, 3, 1>, std::allocator<cva::Matrix<float, 3, 1>>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<cva::Matrix<float, 3, 1> *, std::allocator<cva::Matrix<float, 3, 1>>> { 
                    void *__value_; 
                } __end_cap_; 
            } normals; 
            struct vector<cva::Matrix<unsigned int, 3, 1>, std::allocator<cva::Matrix<unsigned int, 3, 1>>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<cva::Matrix<unsigned int, 3, 1> *, std::allocator<cva::Matrix<unsigned int, 3, 1>>> { 
                    void *__value_; 
                } __end_cap_; 
            } faces; 
            struct vector<cva::Matrix<unsigned int, 2, 1>, std::allocator<cva::Matrix<unsigned int, 2, 1>>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<cva::Matrix<unsigned int, 2, 1> *, std::allocator<cva::Matrix<unsigned int, 2, 1>>> { 
                    void *__value_; 
                } __end_cap_; 
            } edges; 
            struct vector<cva::Matrix<float, 2, 1>, std::allocator<cva::Matrix<float, 2, 1>>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<cva::Matrix<float, 2, 1> *, std::allocator<cva::Matrix<float, 2, 1>>> { 
                    void *__value_; 
                } __end_cap_; 
            } tex_coords; 
            struct vector<cva::Matrix<unsigned int, 3, 1>, std::allocator<cva::Matrix<unsigned int, 3, 1>>> { 
                void *__begin_; 
                void *__end_; 
                struct __compressed_pair<cva::Matrix<unsigned int, 3, 1> *, std::allocator<cva::Matrix<unsigned int, 3, 1>>> { 
                    void *__value_; 
                } __end_cap_; 
            } tex_faces; 
        } mesh; 
    }  _chunkMesh;
    <MTLDevice> * _device;
    <MTLBuffer> * _edges;
    <MTLBuffer> * _faces;
    <MTLBuffer> * _normals;
    unsigned int  _numEdges;
    unsigned int  _numFaces;
    unsigned int  _numNormals;
    unsigned int  _numSemantics;
    unsigned int  _numVertices;
    <MTLBuffer> * _semantics;
    struct vector<unsigned char, std::allocator<unsigned char>> { 
        char *__begin_; 
        char *__end_; 
        struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { 
            char *__value_; 
        } __end_cap_; 
    }  _semanticsVector;
    double  _timestamp;
    <MTLBuffer> * _vertices;
    double  _voxelSize;
}

@property (nonatomic) void chunkID;
@property (nonatomic) /* Warning: unhandled struct encoding: '{ChunkMesh={Matrix<short' */ struct  chunkMesh; /* unknown property attribute:  1>>>=^v}}}} */
@property (nonatomic, retain) <MTLBuffer> *edges;
@property (nonatomic, retain) <MTLBuffer> *faces;
@property (nonatomic, retain) <MTLBuffer> *normals;
@property (nonatomic) unsigned int numEdges;
@property (nonatomic) unsigned int numFaces;
@property (nonatomic) unsigned int numNormals;
@property (nonatomic) unsigned int numSemantics;
@property (nonatomic) unsigned int numVertices;
@property (nonatomic, retain) <MTLBuffer> *semantics;
@property (nonatomic) /* Warning: unhandled struct encoding: '{vector<unsigned char' */ struct  semanticsVector; /* unknown property attribute:  std::allocator<unsigned char>>=*}} */
@property (nonatomic) double timestamp;
@property (nonatomic, retain) <MTLBuffer> *vertices;
@property (nonatomic) double voxelSize;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addSemantics:(const char *)arg1 count:(unsigned int)arg2 size:(unsigned int)arg3;
- (id)anchorForReferenceOriginTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (void)chunkID;
- (unsigned long long)chunkIdFromPosition;
- (id)chunkIdentifier;
- (struct ChunkMesh { struct Matrix<short, 3U, 1U, false> { short x_1_1_1[3]; } x1; struct TriMesh<float, unsigned int> { struct vector<cva::Matrix<float, 3, 1>, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_1_2_1; void *x_1_2_2; struct __compressed_pair<cva::Matrix<float, 3, 1> *, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_3_3_1; } x_1_2_3; } x_2_1_1; struct vector<cva::Matrix<float, 3, 1>, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_2_2_1; void *x_2_2_2; struct __compressed_pair<cva::Matrix<float, 3, 1> *, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_3_3_1; } x_2_2_3; } x_2_1_2; struct vector<cva::Matrix<float, 3, 1>, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_3_2_1; void *x_3_2_2; struct __compressed_pair<cva::Matrix<float, 3, 1> *, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_3_3_1; } x_3_2_3; } x_2_1_3; struct vector<cva::Matrix<unsigned int, 3, 1>, std::allocator<cva::Matrix<unsigned int, 3, 1>>> { void *x_4_2_1; void *x_4_2_2; struct __compressed_pair<cva::Matrix<unsigned int, 3, 1> *, std::allocator<cva::Matrix<unsigned int, 3, 1>>> { void *x_3_3_1; } x_4_2_3; } x_2_1_4; struct vector<cva::Matrix<unsigned int, 2, 1>, std::allocator<cva::Matrix<unsigned int, 2, 1>>> { void *x_5_2_1; void *x_5_2_2; struct __compressed_pair<cva::Matrix<unsigned int, 2, 1> *, std::allocator<cva::Matrix<unsigned int, 2, 1>>> { void *x_3_3_1; } x_5_2_3; } x_2_1_5; } x2; })chunkMesh;
- (void)convertToWorldSourceFromVisionSource:(id)arg1 relativeTransform:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg2 rotationOnly:(bool)arg3;
- (id)edges;
- (long long)faceCount;
- (id)faces;
- (id)identifier;
- (id)initWithChunk:(struct ChunkMesh { struct Matrix<short, 3U, 1U, false> { short x_1_1_1[3]; } x1; struct TriMesh<float, unsigned int> { struct vector<cva::Matrix<float, 3, 1>, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_1_2_1; void *x_1_2_2; struct __compressed_pair<cva::Matrix<float, 3, 1> *, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_3_3_1; } x_1_2_3; } x_2_1_1; struct vector<cva::Matrix<float, 3, 1>, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_2_2_1; void *x_2_2_2; struct __compressed_pair<cva::Matrix<float, 3, 1> *, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_3_3_1; } x_2_2_3; } x_2_1_2; struct vector<cva::Matrix<float, 3, 1>, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_3_2_1; void *x_3_2_2; struct __compressed_pair<cva::Matrix<float, 3, 1> *, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_3_3_1; } x_3_2_3; } x_2_1_3; struct vector<cva::Matrix<unsigned int, 3, 1>, std::allocator<cva::Matrix<unsigned int, 3, 1>>> { void *x_4_2_1; void *x_4_2_2; struct __compressed_pair<cva::Matrix<unsigned int, 3, 1> *, std::allocator<cva::Matrix<unsigned int, 3, 1>>> { void *x_3_3_1; } x_4_2_3; } x_2_1_4; struct vector<cva::Matrix<unsigned int, 2, 1>, std::allocator<cva::Matrix<unsigned int, 2, 1>>> { void *x_5_2_1; void *x_5_2_2; struct __compressed_pair<cva::Matrix<unsigned int, 2, 1> *, std::allocator<cva::Matrix<unsigned int, 2, 1>>> { void *x_3_3_1; } x_5_2_3; } x_2_1_5; } x2; })arg1 device:(id)arg2 timestamp:(double)arg3 voxelSize:(double)arg4;
- (id)normals;
- (unsigned int)numEdges;
- (unsigned int)numFaces;
- (unsigned int)numNormals;
- (unsigned int)numSemantics;
- (unsigned int)numVertices;
- (id)semantics;
- (struct vector<unsigned char, std::allocator<unsigned char>> { char *x1; char *x2; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x_3_1_1; } x3; })semanticsVector;
- (void)setChunkID;
- (void)setChunkMesh:(struct ChunkMesh { struct Matrix<short, 3U, 1U, false> { short x_1_1_1[3]; } x1; struct TriMesh<float, unsigned int> { struct vector<cva::Matrix<float, 3, 1>, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_1_2_1; void *x_1_2_2; struct __compressed_pair<cva::Matrix<float, 3, 1> *, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_3_3_1; } x_1_2_3; } x_2_1_1; struct vector<cva::Matrix<float, 3, 1>, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_2_2_1; void *x_2_2_2; struct __compressed_pair<cva::Matrix<float, 3, 1> *, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_3_3_1; } x_2_2_3; } x_2_1_2; struct vector<cva::Matrix<float, 3, 1>, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_3_2_1; void *x_3_2_2; struct __compressed_pair<cva::Matrix<float, 3, 1> *, std::allocator<cva::Matrix<float, 3, 1>>> { void *x_3_3_1; } x_3_2_3; } x_2_1_3; struct vector<cva::Matrix<unsigned int, 3, 1>, std::allocator<cva::Matrix<unsigned int, 3, 1>>> { void *x_4_2_1; void *x_4_2_2; struct __compressed_pair<cva::Matrix<unsigned int, 3, 1> *, std::allocator<cva::Matrix<unsigned int, 3, 1>>> { void *x_3_3_1; } x_4_2_3; } x_2_1_4; struct vector<cva::Matrix<unsigned int, 2, 1>, std::allocator<cva::Matrix<unsigned int, 2, 1>>> { void *x_5_2_1; void *x_5_2_2; struct __compressed_pair<cva::Matrix<unsigned int, 2, 1> *, std::allocator<cva::Matrix<unsigned int, 2, 1>>> { void *x_3_3_1; } x_5_2_3; } x_2_1_5; } x2; })arg1;
- (void)setEdges:(id)arg1;
- (void)setFaces:(id)arg1;
- (void)setNormals:(id)arg1;
- (void)setNumEdges:(unsigned int)arg1;
- (void)setNumFaces:(unsigned int)arg1;
- (void)setNumNormals:(unsigned int)arg1;
- (void)setNumSemantics:(unsigned int)arg1;
- (void)setNumVertices:(unsigned int)arg1;
- (void)setSemantics:(id)arg1;
- (void)setSemanticsVector:(struct vector<unsigned char, std::allocator<unsigned char>> { char *x1; char *x2; struct __compressed_pair<unsigned char *, std::allocator<unsigned char>> { char *x_3_1_1; } x3; })arg1;
- (void)setTimestamp:(double)arg1;
- (void)setVertices:(id)arg1;
- (void)setVoxelSize:(double)arg1;
- (double)timestamp;
- (long long)vertexCount;
- (id)vertices;
- (double)voxelSize;

@end

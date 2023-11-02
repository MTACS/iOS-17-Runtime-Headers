
@interface VCPVideoEmbeddings : NSObject {
    float * _averageEmbedding;
    float * _currentEmbedding;
    long long  _embeddingMode;
    unsigned long long  _embeddingSize;
    NSMutableArray * _videoEmbeddings;
}

@property (readonly) long long embeddingMode;

- (void).cxx_destruct;
- (int)addEmbeddings:(id)arg1 startTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2 duration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)dealloc;
- (long long)embeddingMode;
- (id)getEmbeddingsForRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (id)initWithEmbeddingMode:(long long)arg1;

@end

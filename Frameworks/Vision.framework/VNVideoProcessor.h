
@interface VNVideoProcessor : NSObject {
    VCPVideoProcessor * _videoProcessor;
}

- (void).cxx_destruct;
- (bool)addRequest:(id)arg1 processingOptions:(id)arg2 error:(id*)arg3;
- (bool)addRequest:(id)arg1 withProcessingOptions:(id)arg2 error:(id*)arg3;
- (bool)analyzeTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 error:(id*)arg2;
- (bool)analyzeWithTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 error:(id*)arg2;
- (void)cancel;
- (id)initWithURL:(id)arg1;
- (bool)removeRequest:(id)arg1 error:(id*)arg2;

@end

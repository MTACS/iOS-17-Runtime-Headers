
@interface NUCopyKernel : NUComputeKernel {
    struct { 
        unsigned long long x; 
        unsigned long long y; 
        unsigned long long z; 
    }  _destinationOffset;
    struct { 
        struct { 
            unsigned long long x; 
            unsigned long long y; 
            unsigned long long z; 
        } origin; 
        struct { 
            unsigned long long width; 
            unsigned long long height; 
            unsigned long long depth; 
        } size; 
    }  _sourceRegion;
    <MTLTexture> * _sourceTexture;
}

@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } destinationOffset;
@property (nonatomic) struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; } sourceRegion;
@property (nonatomic, retain) <MTLTexture> *sourceTexture;

+ (void)copyFromTexture:(id)arg1 region:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg2 toTexture:(id)arg3 atPoint:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg4 withCommandBuffer:(id)arg5;

- (void).cxx_destruct;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })destinationOffset;
- (void)encodeToCommandBuffer:(id)arg1 destinationTexture:(id)arg2;
- (void)setDestinationOffset:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setSourceRegion:(struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })arg1;
- (void)setSourceTexture:(id)arg1;
- (struct { struct { unsigned long long x_1_1_1; unsigned long long x_1_1_2; unsigned long long x_1_1_3; } x1; struct { unsigned long long x_2_1_1; unsigned long long x_2_1_2; unsigned long long x_2_1_3; } x2; })sourceRegion;
- (id)sourceTexture;

@end

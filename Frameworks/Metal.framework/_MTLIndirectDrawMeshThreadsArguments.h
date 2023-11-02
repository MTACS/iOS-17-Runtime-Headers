
@interface _MTLIndirectDrawMeshThreadsArguments : NSObject {
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _threadsPerGrid;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _threadsPerMeshThreadgroup;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _threadsPerObjectThreadgroup;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  threadsPerGrid;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  threadsPerMeshThreadgroup;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  threadsPerObjectThreadgroup;
}

@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } threadsPerGrid;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } threadsPerMeshThreadgroup;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } threadsPerObjectThreadgroup;

- (void)setThreadsPerGrid:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setThreadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setThreadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })threadsPerGrid;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })threadsPerMeshThreadgroup;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })threadsPerObjectThreadgroup;

@end

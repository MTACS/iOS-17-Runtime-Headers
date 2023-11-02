
@interface _MTLIndirectDrawMeshThreadgroupsArguments : NSObject {
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _threadgroupsPerGrid;
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
    }  threadgroupsPerGrid;
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

@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } threadgroupsPerGrid;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } threadsPerMeshThreadgroup;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } threadsPerObjectThreadgroup;

- (void)setThreadgroupsPerGrid:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setThreadsPerMeshThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setThreadsPerObjectThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })threadgroupsPerGrid;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })threadsPerMeshThreadgroup;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })threadsPerObjectThreadgroup;

@end

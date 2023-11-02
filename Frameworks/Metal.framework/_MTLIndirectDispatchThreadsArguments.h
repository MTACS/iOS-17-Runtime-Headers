
@interface _MTLIndirectDispatchThreadsArguments : NSObject {
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _threadsPerGrid;
    struct { 
        unsigned long long width; 
        unsigned long long height; 
        unsigned long long depth; 
    }  _threadsPerThreadgroup;
}

@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } threadsPerGrid;
@property (nonatomic) struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; } threadsPerThreadgroup;

- (void)setThreadsPerGrid:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (void)setThreadsPerThreadgroup:(struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })arg1;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })threadsPerGrid;
- (struct { unsigned long long x1; unsigned long long x2; unsigned long long x3; })threadsPerThreadgroup;

@end

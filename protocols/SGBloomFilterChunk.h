
@protocol SGBloomFilterChunk <NSObject>

@required

- (void)add:(union { unsigned long long x1; union { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;
- (unsigned int)count;
- (bool)exists:(union { unsigned long long x1; union { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; })arg1;

@end

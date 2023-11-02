
@protocol MLNearestNeighborsIndex

@required

- (unsigned long long)dataPointCount;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x1; void *x2; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x_3_1_1; } x3; })findNearestNeighbors:(unsigned long long)arg1 toIndex:(unsigned long long)arg2;
- (struct vector<std::pair<unsigned long, float>, std::allocator<std::pair<unsigned long, float>>> { void *x1; void *x2; struct __compressed_pair<std::pair<unsigned long, float> *, std::allocator<std::pair<unsigned long, float>>> { void *x_3_1_1; } x3; })findNearestNeighbors:(unsigned long long)arg1 toQueryPoint:(const void*)arg2;
- (bool)updateWithData:(const void*)arg1 error:(id*)arg2;

@end

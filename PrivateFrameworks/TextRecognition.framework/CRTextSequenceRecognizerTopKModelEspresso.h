
@interface CRTextSequenceRecognizerTopKModelEspresso : CRTextSequenceRecognizerModelEspresso

- (id)outputFromOutputBuffers:(struct vector<espresso_buffer_t, std::allocator<espresso_buffer_t>> { struct { /* ? */ } *x1; struct { /* ? */ } *x2; struct __compressed_pair<espresso_buffer_t *, std::allocator<espresso_buffer_t>> { struct { /* ? */ } *x_3_1_1; } x3; })arg1 featureInfo:(id)arg2;
- (id)outputNames;

@end

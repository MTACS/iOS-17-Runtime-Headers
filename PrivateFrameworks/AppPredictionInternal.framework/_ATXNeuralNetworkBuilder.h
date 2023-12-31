
@interface _ATXNeuralNetworkBuilder : NSObject {
    NSMutableData * _descriptors;
    bool  _done;
    bool  _haveOutputLayer;
    unsigned long long  _nlayers;
    unsigned long long  _prevSize;
    NSMutableArray * _weightsAndBiases;
}

- (void).cxx_destruct;
- (void)addHiddenLayer:(unsigned long long)arg1 weights:(const float*)arg2 bias:(const float*)arg3 activation:(unsigned char)arg4 skip:(bool)arg5;
- (void)addOutputLayer:(unsigned long long)arg1 weights:(const float*)arg2 bias:(const float*)arg3 activation:(unsigned char)arg4 softmax:(bool)arg5;
- (id)init;
- (id)initWithInputSize:(unsigned long long)arg1;
- (id)serialize;

@end

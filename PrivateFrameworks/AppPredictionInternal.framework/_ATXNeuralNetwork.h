
@interface _ATXNeuralNetwork : NSObject {
    NSData * _data;
    const char * _dataBytes;
    const struct { unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned char x5; unsigned char x6; unsigned char x7; unsigned char x8; } * _layers;
    unsigned long long  _nlayers;
}

@property (nonatomic, readonly) unsigned long long inputSize;
@property (nonatomic, readonly) unsigned long long outputSize;

- (void).cxx_destruct;
- (double)_predict:(float*)arg1 freeInputsAfterUse:(bool)arg2;
- (float*)_runOnInputs:(float*)arg1 freeInputsAfterUse:(bool)arg2;
- (void)forInputs:(const float*)arg1 computeOutputLayer:(float*)arg2;
- (id)init;
- (id)initWithData:(id)arg1;
- (unsigned long long)inputSize;
- (unsigned long long)outputSize;
- (double)predict32:(const float*)arg1;
- (double)predict:(const double*)arg1;

@end

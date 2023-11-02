
@interface CNNMLScalerEspresso : NSObject {
    void * _ctx;
    struct { 
        void *plan; 
        int network_index; 
    }  _net;
    int  _outputHeight;
    int  _outputWidth;
    void * _plan;
}

@property (readonly) int outputHeight;
@property (readonly) int outputWidth;

- (int)inferenceWithPixelBuffer:(struct __CVBuffer { }*)arg1 toDestinationPixelBuffer:(struct __CVBuffer { }*)arg2;
- (id)initWithConfig:(id)arg1;
- (int)outputHeight;
- (int)outputWidth;

@end

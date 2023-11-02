
@interface MLE5OutputPortBinder : NSObject <MLE5PortBinder> {
    MLFeatureDescription * _featureDescription;
    MLFeatureValue * _featureValue;
    id  _outputBacking;
    bool  _outputBackingWasDirectlyBound;
    MLPixelBufferPool * _pixelBufferPool;
    struct e5rt_io_port { } * _portHandle;
    NSObject<OS_dispatch_queue> * _serialQueue;
    struct __CVBuffer { } * _temporarilyBoundPixelBuffer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) MLFeatureDescription *featureDescription;
@property (readonly) MLFeatureValue *featureValue;
@property (readonly) unsigned long long hash;
@property (retain) id outputBacking;
@property (nonatomic) bool outputBackingWasDirectlyBound;
@property (nonatomic, retain) MLPixelBufferPool *pixelBufferPool;
@property (readonly) struct e5rt_io_port { }*portHandle;
@property (readonly) NSObject<OS_dispatch_queue> *serialQueue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_copyOutputFromPort:(struct e5rt_io_port { }*)arg1 toOutputBacking:(id)arg2 featureDescription:(id)arg3 error:(id*)arg4;
- (id)_makeFeatureValueAndReturnError:(id*)arg1;
- (id)_makeFeatureValueFromOutputBacking:(id)arg1 error:(id*)arg2;
- (id)_makeFeatureValueFromPort:(struct e5rt_io_port { }*)arg1 featureDescription:(id)arg2 error:(id*)arg3;
- (long long)_tryToBindOutputBackingDirectlyAndReturnError:(id*)arg1;
- (bool)bindAndReturnError:(id*)arg1;
- (id)featureDescription;
- (id)featureValue;
- (id)initWithPort:(struct e5rt_io_port { }*)arg1 featureDescription:(id)arg2;
- (id)outputBacking;
- (bool)outputBackingWasDirectlyBound;
- (id)pixelBufferPool;
- (struct e5rt_io_port { }*)portHandle;
- (void)reset;
- (id)serialQueue;
- (void)setOutputBacking:(id)arg1;
- (void)setOutputBackingWasDirectlyBound:(bool)arg1;
- (void)setPixelBufferPool:(id)arg1;

@end

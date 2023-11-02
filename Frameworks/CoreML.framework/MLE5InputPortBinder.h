
@interface MLE5InputPortBinder : NSObject <MLE5PortBinder> {
    bool  _boundFeatureDirectly;
    MLFeatureDescription * _featureDescription;
    MLFeatureValue * _featureValue;
    MLPixelBufferPool * _pixelBufferPool;
    struct e5rt_io_port { } * _portHandle;
    struct __CVBuffer { } * _temporarilyBoundPixelBuffer;
}

@property (nonatomic, readonly) bool boundFeatureDirectly;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) MLFeatureDescription *featureDescription;
@property (retain) MLFeatureValue *featureValue;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) MLPixelBufferPool *pixelBufferPool;
@property (readonly) struct e5rt_io_port { }*portHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)bindMemoryObjectToPort:(id)arg1 error:(id*)arg2;
- (bool)boundFeatureDirectly;
- (bool)copyFeatureValueToPortAndReturnError:(id*)arg1;
- (id)featureDescription;
- (id)featureValue;
- (id)initWithPort:(struct e5rt_io_port { }*)arg1 featureDescription:(id)arg2;
- (id)pixelBufferPool;
- (struct e5rt_io_port { }*)portHandle;
- (void)reset;
- (void)setFeatureValue:(id)arg1;
- (void)setPixelBufferPool:(id)arg1;

@end

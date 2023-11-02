
@interface MLE5InputPort : NSObject <MLE5IOPort> {
    MLE5InputPortBinder * _binder;
    MLFeatureValue * _featureValue;
    NSString * _name;
    struct e5rt_io_port { } * _portHandle;
}

@property (retain) MLE5InputPortBinder *binder;
@property (nonatomic, readonly) bool boundFeatureDirectly;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) MLFeatureValue *featureValue;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, retain) MLPixelBufferPool *pixelBufferPool;
@property (readonly) struct e5rt_io_port { }*portHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)binder;
- (bool)boundFeatureDirectly;
- (bool)copyFeatureValueToPortAndReturnError:(id*)arg1;
- (void)dealloc;
- (id)description;
- (id)featureValue;
- (id)initWithPortHandle:(struct e5rt_io_port { }*)arg1 name:(id)arg2 featureDescription:(id)arg3;
- (id)name;
- (id)pixelBufferPool;
- (struct e5rt_io_port { }*)portHandle;
- (bool)prepareAndReturnError:(id*)arg1;
- (void)reset;
- (void)setBinder:(id)arg1;
- (void)setFeatureValue:(id)arg1;
- (void)setPixelBufferPool:(id)arg1;

@end

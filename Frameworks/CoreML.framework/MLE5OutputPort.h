
@interface MLE5OutputPort : NSObject <MLE5IOPort> {
    MLE5OutputPortBinder * _binder;
    MLFeatureDescription * _featureDescription;
    NSString * _name;
    struct e5rt_io_port { } * _portHandle;
}

@property (retain) MLE5OutputPortBinder *binder;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) MLFeatureDescription *featureDescription;
@property (readonly) MLFeatureValue *featureValue;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (nonatomic, readonly) bool outputBackingWasDirectlyBound;
@property (nonatomic, retain) MLPixelBufferPool *pixelBufferPool;
@property (readonly) struct e5rt_io_port { }*portHandle;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)binder;
- (void)dealloc;
- (id)description;
- (id)featureDescription;
- (id)featureValue;
- (id)initWithPortHandle:(struct e5rt_io_port { }*)arg1 name:(id)arg2 featureDescription:(id)arg3;
- (id)name;
- (bool)outputBackingWasDirectlyBound;
- (id)pixelBufferPool;
- (struct e5rt_io_port { }*)portHandle;
- (bool)prepareWithOptions:(id)arg1 error:(id*)arg2;
- (void)reset;
- (void)setBinder:(id)arg1;
- (void)setPixelBufferPool:(id)arg1;

@end

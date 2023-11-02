
@interface FigCaptureDeferredProcessingJob : NSObject {
    BWDeferredProcessingContainer * _container;
    <FigCaptureDeferredProcessingJobDelegate> * _delegate;
    long long  _durationNS;
    bool  _interactiveQoS;
    NSString * _masterPortType;
    int  _numberOfPhotosDelivered;
    long long  _prepareGraphNS;
    FigCaptureDeferredPhotoProcessorRequest * _processorRequest;
    long long  _startNS;
}

@property (nonatomic) long long durationNS;
@property (getter=isInteractiveQoS, nonatomic) bool interactiveQoS;
@property (nonatomic, readonly) NSString *masterPortType;
@property int numberOfPhotosDelivered;
@property (nonatomic) long long prepareGraphNS;
@property (nonatomic, readonly) FigCaptureDeferredPhotoProcessorRequest *processorRequest;
@property (nonatomic) long long startNS;

+ (bool)isPotentiallyRecoverableError:(int)arg1;

- (void)completedWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)container;
- (void)dealloc;
- (long long)durationNS;
- (void)failedWithError:(int)arg1;
- (id)initWithProcessorRequest:(id)arg1 delegate:(id)arg2 error:(int*)arg3;
- (bool)isInteractiveQoS;
- (id)masterPortType;
- (int)numberOfPhotosDelivered;
- (long long)prepareGraphNS;
- (id)processorRequest;
- (void)setDurationNS:(long long)arg1;
- (void)setInteractiveQoS:(bool)arg1;
- (void)setNumberOfPhotosDelivered:(int)arg1;
- (void)setPrepareGraphNS:(long long)arg1;
- (void)setStartNS:(long long)arg1;
- (void)start;
- (long long)startNS;

@end

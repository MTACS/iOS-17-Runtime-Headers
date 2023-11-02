
@interface SignpostImageQueueSampleEvent : NSObject <SignpostCARenderServerFrameMetadata> {
    unsigned int  _frameSeed;
    unsigned int  _queueGeneration;
    unsigned int  _queueID;
    double  _serverSamplingTime;
    unsigned int  _surfaceID;
}

@property (nonatomic, readonly) unsigned int frameSeed;
@property (nonatomic, readonly) unsigned int queueGeneration;
@property (nonatomic, readonly) unsigned int queueID;
@property (nonatomic, readonly) double serverSamplingTime;
@property (nonatomic, readonly) unsigned int surfaceID;

- (unsigned int)frameSeed;
- (id)initWithImageQueueSampleEvent:(id)arg1;
- (unsigned int)queueGeneration;
- (unsigned int)queueID;
- (double)serverSamplingTime;
- (unsigned int)surfaceID;

@end

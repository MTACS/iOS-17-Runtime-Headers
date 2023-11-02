
@interface BWAppClipCodeNode : BWNode {
    bool  _appC3DAvailable;
    struct AppC3DSession { } * _appClipCodeSession;
    <BWMetadataDetectedResultsObserver> * _detectedResultsObserver;
    bool  _haveInputTransform;
    long long  _lastAppClipCodeCount;
    bool  _mirroringHorizontal;
    bool  _mirroringVertical;
    NSObject<OS_dispatch_queue> * _processingQueue;
    int  _rotationDegrees;
    FigWeakReference * _weakSelf;
}

@property (nonatomic) <BWMetadataDetectedResultsObserver> *detectedResultsObserver;

+ (void)initialize;

- (void)dealloc;
- (id)detectedResultsObserver;
- (void)didReachEndOfDataForInput:(id)arg1;
- (id)initWithProcessingQueuePriority:(unsigned int)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (void)setDetectedResultsObserver:(id)arg1;

@end

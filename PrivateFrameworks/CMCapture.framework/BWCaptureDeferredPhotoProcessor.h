
@interface BWCaptureDeferredPhotoProcessor : NSObject <FigCaptureDeferredProcessingJobDelegate> {
    struct OpaqueFigCaptureDeferredPhotoProcessor { } * _deferredPhotoProcessor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)immediateTermination;
- (id)initWithFigCaptureDeferredPhotoProcessor:(struct OpaqueFigCaptureDeferredPhotoProcessor { }*)arg1;
- (void)job:(id)arg1 completedWithSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2;
- (void)job:(id)arg1 failedWithError:(int)arg2;
- (void)request:(id)arg1 failedWithError:(int)arg2;

@end

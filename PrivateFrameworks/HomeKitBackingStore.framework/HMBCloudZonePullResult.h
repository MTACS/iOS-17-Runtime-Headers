
@interface HMBCloudZonePullResult : HMFObject {
    NAFuture * _processingFuture;
}

@property (readonly) NAFuture *processingFuture;

- (void).cxx_destruct;
- (id)initWithProcessingFuture:(id)arg1;
- (id)processingFuture;

@end

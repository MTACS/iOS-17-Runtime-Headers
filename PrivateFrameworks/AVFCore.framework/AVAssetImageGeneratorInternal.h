
@interface AVAssetImageGeneratorInternal : NSObject {
    bool  allowsProfessionalVideoWorkflowVideoDecoders;
    NSString * apertureMode;
    bool  appliesPreferredTrackTransform;
    AVAsset * asset;
    int  cancelledRequestIDThreshold;
    AVCustomVideoCompositorSession * customVideoCompositorSession;
    NSObject<OS_dispatch_queue> * generateImagesAsyncQueue;
    struct OpaqueFigAssetImageGenerator { } * generator;
    NSObject<OS_dispatch_queue> * imageRequestQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  maximumSize;
    int  nextRequestID;
    bool  prefersStandardDynamicRange;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  requestedTimeToleranceAfter;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  requestedTimeToleranceBefore;
    NSMutableArray * requests;
    NSObject<OS_dispatch_queue> * requestsQueue;
    bool  useSWDecoderForAV1;
    AVVideoComposition * videoComposition;
    AVWeakReference * weakReference;
}

@end


@interface AVCaptureSynchronizedSampleBufferDataInternal : NSObject {
    int  constituentDeviceCaptureID;
    long long  droppedReason;
    bool  hasCorrespondingDepthData;
    bool  hasCorrespondingVisionData;
    struct opaqueCMSampleBuffer { } * sampleBuffer;
    bool  sampleBufferWasDropped;
}

@end

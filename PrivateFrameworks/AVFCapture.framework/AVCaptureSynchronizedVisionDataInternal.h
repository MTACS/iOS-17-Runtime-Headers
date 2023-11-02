
@interface AVCaptureSynchronizedVisionDataInternal : NSObject {
    long long  droppedReason;
    struct __CVBuffer { } * visionDataPixelBuffer;
    bool  visionDataWasDropped;
}

@end

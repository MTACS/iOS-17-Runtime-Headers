
@interface AVMutableMovieInternal : NSObject {
    NSURL * URL;
    NSData * data;
    struct OpaqueFigAsset { } * figAsset;
    struct OpaqueFigMutableMovie { } * figMutableMovie;
    struct OpaqueFigFormatReader { } * formatReader;
    NSDictionary * initializationOptions;
    AVDispatchOnce * makeTracksArrayOnce;
    NSObject<OS_dispatch_semaphore> * metadataWaitingSemaphore;
    NSObject<OS_dispatch_semaphore> * trackWaitingSemaphore;
    NSMutableArray * tracks;
}

- (void).cxx_destruct;

@end

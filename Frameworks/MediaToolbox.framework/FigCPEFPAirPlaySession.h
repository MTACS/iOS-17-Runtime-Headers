
@interface FigCPEFPAirPlaySession : NSObject {
    NSDictionary * _contentInfo;
    unsigned int  _fairPlayContext;
    struct __CFAllocator { } * _fairPlayDeallocator;
    struct FPStreamOpaque_ { } * _fairPlaySession;
    bool  _invalid;
    NSString * _mediaControlUUID;
    struct OpaqueFigEndpointPlaybackSession { } * _playbackSession;
    NSDictionary * _protectionInfo;
    NSObject<OS_dispatch_queue> * _serializationQueue;
    unsigned int  _vodkaVersion;
}

- (void)authorizeItemCompletionHandler_objc:(struct { id x1; struct __CFString {} *x2; id x3; id /* block */ x4; }*)arg1 picData:(struct __CFData { }*)arg2 playerGUID:(struct __CFString { }*)arg3 error:(int)arg4;
- (void)beginSessionWithCompletionQueue:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)createPicRequestWithError:(id*)arg1;
- (void)dealloc;
- (void)endSession;
- (id)initWithFairPlayContext:(unsigned int)arg1 contentInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(struct OpaqueFigEndpointPlaybackSession { }*)arg4 mediaControlUUID:(id)arg5;
- (id)initWithFairPlayContext:(unsigned int)arg1 protectionInfo:(id)arg2 routeInfo:(id)arg3 playbackSession:(struct OpaqueFigEndpointPlaybackSession { }*)arg4 mediaControlUUID:(id)arg5;
- (id)initWithFairPlayContext:(unsigned int)arg1 routeInfo:(id)arg2 playbackSession:(struct OpaqueFigEndpointPlaybackSession { }*)arg3 mediaControlUUID:(id)arg4;
- (id)legacySinfs;
- (id)mediaControlParamsWithStoreResponse:(id)arg1;
- (id)sicWithPic:(id)arg1;

@end

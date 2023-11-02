
@interface AVCaptureInputInternal : NSObject {
    struct OpaqueFigCaptureSession { } * figCaptureSession;
    NSObject<OS_dispatch_queue> * figCaptureSessionSyncQueue;
    AVCaptureSession * session;
}

- (void)dealloc;
- (id)init;

@end

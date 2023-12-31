
@interface AVCaptureOutputInternal : NSObject {
    int  changeSeed;
    NSMutableArray * connections;
    struct OpaqueFigCaptureSession { } * figCaptureSession;
    NSObject<OS_dispatch_queue> * figCaptureSessionSyncQueue;
    struct CGAffineTransform { 
        double a; 
        double b; 
        double c; 
        double d; 
        double tx; 
        double ty; 
    }  metadataTransform;
    bool  physicallyMirrorsVideo;
    double  rollAdjustment;
    AVCaptureSession * session;
    NSString * sinkID;
}

- (void)dealloc;
- (id)init;

@end


@interface BWCameraStreamingMonitorClientInfo : NSObject {
    PAAccessInterval * _accessInterval;
    bool  _cameraAccessGranted;
    RBSProcessHandle * _processHandle;
    bool  _streaming;
    bool  _terminated;
}

- (void)dealloc;

@end

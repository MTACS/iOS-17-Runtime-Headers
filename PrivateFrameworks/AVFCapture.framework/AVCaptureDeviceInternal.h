
@interface AVCaptureDeviceInternal : NSObject {
    AVCaptureDeviceInput * activeInput;
    NSMutableArray * activeReactions;
    int  configLockPid;
    int  configLockRefCount;
    int  openRefCount;
    bool  usingDevice;
}

- (void)dealloc;
- (id)init;

@end

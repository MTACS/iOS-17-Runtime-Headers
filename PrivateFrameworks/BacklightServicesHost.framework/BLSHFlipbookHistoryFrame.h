
@interface BLSHFlipbookHistoryFrame : BLSDiagnosticFlipbookFrame {
    <BLSHRenderedFlipbookFrame> * _hostFrame;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    <BLSHRenderedFlipbookFrame> * _lock_retainedHostFrame;
}

@property (nonatomic, readonly) <BLSHRenderedFlipbookFrame> *hostFrame;
@property (nonatomic, readonly) unsigned long long retainedMemoryUsage;
@property (getter=isRetainingSurface, nonatomic, readonly) bool retainingSurface;

- (void).cxx_destruct;
- (id)description;
- (id)hostFrame;
- (id)initWithFrame:(id)arg1;
- (bool)isRetainingSurface;
- (struct __IOSurface { }*)rawSurface;
- (unsigned long long)retainedMemoryUsage;
- (void)stopRetainingSurface;
- (struct __IOSurface { }*)surface;

@end

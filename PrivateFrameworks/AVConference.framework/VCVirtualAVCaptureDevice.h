
@interface VCVirtualAVCaptureDevice : AVCaptureDevice {
    AVCaptureDeviceFormat * _activeFormat;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _activeVideoMaxFrameDuration;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _activeVideoMinFrameDuration;
    AVCaptureDevice * _captureDevice;
    VCVirtualAVCaptureHardware * _captureHardware;
    VCCannedVideoCaptureSource * _captureSource;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _centerStageRectOfInterest;
    NSMutableArray * _deviceInputs;
    struct _opaque_pthread_mutex_t { 
        long long __sig; 
        BOOL __opaque[56]; 
    }  _deviceMutex;
    NSString * _deviceType;
    NSString * _deviceUniqueID;
    VCVideoHardwareDumpCollector * _dumpCollector;
    NSArray * _formats;
    VCImageResizingConverter * _imageResizingConverter;
    int  _lockCount;
    int  _orientation;
    NSObject<OS_dispatch_queue> * _xpcCommandQueue;
}

@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } centerStageRectOfInterest;
@property (nonatomic, retain) NSString *deviceType;
@property (nonatomic, retain) NSArray *formats;

- (id)activeFormat;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMaxFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })activeVideoMinFrameDuration;
- (void)addDeviceInput:(id)arg1;
- (void)addObserver:(id)arg1 forKeyPath:(id)arg2 options:(unsigned long long)arg3 context:(void*)arg4;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })centerStageRectOfInterest;
- (void)configureResizingConverterWithFormat:(id)arg1;
- (void)dealloc;
- (void)deregisterBlocksFromService;
- (id)description;
- (id)deviceCode;
- (id)deviceInputs;
- (id)deviceType;
- (void)executeBlockUnderConfigurationLock:(id /* block */)arg1;
- (id)formats;
- (id)initWithUniqueID:(id)arg1 orientation:(int)arg2;
- (bool)lockForConfiguration:(id*)arg1;
- (void)registerBlocksForService;
- (void)removeDeviceInput:(id)arg1;
- (void)removeObserver:(id)arg1 forKeyPath:(id)arg2 context:(void*)arg3;
- (void)setActiveFormat:(id)arg1;
- (void)setActiveVideoMaxFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setActiveVideoMinFrameDuration:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setCenterStageRectOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDeviceType:(id)arg1;
- (void)setFormats:(id)arg1;
- (void)startDumpCollector;
- (int)startVirtualCapture;
- (void)stopDumpCollector;
- (int)stopVirtualCapture;
- (id)uniqueID;
- (void)unlockForConfiguration;
- (void)verifyLockForConfiguration;

@end

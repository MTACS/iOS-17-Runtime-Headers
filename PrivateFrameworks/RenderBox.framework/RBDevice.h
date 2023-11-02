
@interface RBDevice : NSObject <RBImageRenderer> {
    struct refcounted_ptr<RB::Device> { 
        struct Device {} *_p; 
    }  _device;
    struct atomic<unsigned int> { 
        struct __cxx_atomic_impl<unsigned int, std::__cxx_atomic_base_impl<unsigned int>> { 
            _Atomic unsigned int __a_value; 
        } __a_; 
    }  _pending_collect;
}

@property unsigned long long GPUPriority;
@property unsigned long long backgroundGPUPriority;
@property (nonatomic, readonly) <MTLCaptureScope> *captureScope;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) <MTLDevice> *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)allDevices;
+ (bool)allowsRenderingInBackground;
+ (unsigned long long)defaultBackgroundGPUPriority;
+ (unsigned long long)defaultGPUPriority;
+ (void)didEnterBackground:(id)arg1;
+ (bool)isRunningInBackground;
+ (bool)isSupported;
+ (void)setAllowsRenderingInBackground:(bool)arg1;
+ (void)setDefaultBackgroundGPUPriority:(unsigned long long)arg1;
+ (void)setDefaultGPUPriority:(unsigned long long)arg1;
+ (id)sharedDefaultDevice;
+ (id)sharedDevice:(id)arg1;
+ (void)willEnterForeground:(id)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)GPUPriority;
- (unsigned long long)backgroundGPUPriority;
- (id)captureScope;
- (void)collectResources;
- (void)dealloc;
- (id)device;
- (id)initWithDevice:(id)arg1;
- (id)pipelineDescriptions:(id)arg1 extraColorFormats:(id)arg2;
- (id)queue;
- (struct CGImage { }*)renderImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 renderer:(id /* block */)arg3;
- (void)renderImageInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 options:(id)arg2 renderer:(id /* block */)arg3 completionQueue:(id)arg4 handler:(id /* block */)arg5;
- (void)setBackgroundGPUPriority:(unsigned long long)arg1;
- (void)setGPUPriority:(unsigned long long)arg1;

@end

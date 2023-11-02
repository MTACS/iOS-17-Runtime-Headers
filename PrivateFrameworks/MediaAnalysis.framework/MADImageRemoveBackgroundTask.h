
@interface MADImageRemoveBackgroundTask : NSObject {
    struct atomic<bool> { 
        struct __cxx_atomic_impl<bool, std::__cxx_atomic_base_impl<bool>> { 
            _Atomic bool __a_value; 
        } __a_; 
    }  _canceled;
    <MTLDevice> * _preferredMetalDevice;
    NSString * _signpostPayload;
}

@property (nonatomic, readonly) bool canceled;
@property (nonatomic, retain) <MTLDevice> *preferredMetalDevice;
@property (nonatomic, readonly) NSString *signpostPayload;

- (void).cxx_destruct;
- (bool)autoCancellable;
- (void)cancel;
- (bool)canceled;
- (bool)computeRegionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; }*)arg1 pixelBuffer:(struct __CVBuffer { }*)arg2 orientation:(unsigned int)arg3 error:(id*)arg4;
- (id)computeSensitivityOfPixelBuffer:(struct __CVBuffer { }*)arg1;
- (id)generateMaskWithRequestHandler:(id)arg1 regionOfInterest:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 error:(id*)arg3;
- (id)initWithSignpostPayload:(id)arg1;
- (id)preferredMetalDevice;
- (float)resourceRequirement;
- (void)setPreferredMetalDevice:(id)arg1;
- (id)signpostPayload;

@end


@interface OZFxPlugColorGamutHandler : NSObject <FxColorGamutAPI, PROAPIObject> {
    struct shared_ptr<OZFxPlugSharedLock> { 
        struct OZFxPlugSharedLock {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _fxPlugLock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)colorMatrixFromDesiredRGBToYCbCr;
- (id)colorMatrixFromDesiredRGBToYCbCrAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (id)colorMatrixFromYCbCrToDesiredRGB;
- (id)colorMatrixFromYCbCrToDesiredRGBAtTime:(union { double x1; struct { /* ? */ } *x2; })arg1;
- (unsigned long long)colorPrimaries;
- (bool)conformsToProtocol:(id)arg1 version:(unsigned int)arg2;
- (id)initWithPluginLock:(struct shared_ptr<OZFxPlugSharedLock> { struct OZFxPlugSharedLock {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)pcFloat33MatrixToFxMatrix44:(const float*)arg1;

@end

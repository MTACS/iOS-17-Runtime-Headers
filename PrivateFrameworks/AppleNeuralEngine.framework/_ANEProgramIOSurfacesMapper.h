
@interface _ANEProgramIOSurfacesMapper : NSObject {
    _ANEDeviceController * _controller;
    _ANEDeviceController * _deviceController;
    unsigned long long  _programHandle;
}

@property (nonatomic, readonly) _ANEDeviceController *controller;
@property (nonatomic, readonly) _ANEDeviceController *deviceController;
@property (nonatomic, readonly) unsigned long long programHandle;

+ (void)initialize;
+ (id)mapperWithController:(id)arg1;
+ (id)mapperWithProgramHandle:(unsigned long long)arg1;
+ (id)new;

- (void).cxx_destruct;
- (id)controller;
- (void)dealloc;
- (id)deviceController;
- (id)init;
- (id)initWithController:(id)arg1;
- (bool)mapIOSurfacesWithModel:(id)arg1 request:(id)arg2 cacheInference:(bool)arg3 error:(id*)arg4;
- (void)prepareANEMemoryMappingParams:(struct ANEMemoryMappingParamsStruct { struct ANEBufferStruct { struct __IOSurface {} *x_1_1_1; unsigned int x_1_1_2; int x_1_1_3; int x_1_1_4; unsigned int x_1_1_5; } x1[128]; unsigned long long x2; unsigned int x3; unsigned int x4; unsigned long long x5; }*)arg1 request:(id)arg2;
- (unsigned long long)programHandle;
- (bool)unmapIOSurfacesWithModel:(id)arg1 request:(id)arg2 error:(id*)arg3;
- (bool)validateRequest:(id)arg1 model:(id)arg2;

@end

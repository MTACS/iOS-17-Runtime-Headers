
@interface RBXNUWrapper : NSObject {
    struct __IOGPUDevice { } * _gpuDevice;
}

+ (id)sharedWrapper;

- (id)init;
- (void)setGPURole:(unsigned char)arg1 forPid:(int)arg2;

@end


@interface _ANEDeviceController : NSObject {
    struct ANEDeviceStruct { void *x1; void *x2; void *x3; unsigned char x4; int x5; } * _device;
    bool  _isPrivileged;
    unsigned long long  _programHandle;
    long long  _usecount;
}

@property (nonatomic) struct ANEDeviceStruct { void *x1; void *x2; void *x3; unsigned char x4; int x5; }*device;
@property (nonatomic, readonly) bool isPrivileged;
@property (nonatomic, readonly) unsigned long long programHandle;
@property (nonatomic) long long usecount;

+ (id)controllerWithProgramHandle:(unsigned long long)arg1;
+ (void)initialize;
+ (id)new;
+ (id)sharedPrivilegedConnection;

- (struct ANEDeviceStruct { void *x1; void *x2; void *x3; unsigned char x4; int x5; }*)device;
- (id)init;
- (id)initWithProgramHandle:(unsigned long long)arg1 priviledged:(bool)arg2;
- (bool)isPrivileged;
- (unsigned long long)programHandle;
- (void)setDevice:(struct ANEDeviceStruct { void *x1; void *x2; void *x3; unsigned char x4; int x5; }*)arg1;
- (void)setUsecount:(long long)arg1;
- (void)start;
- (void)stop;
- (long long)usecount;

@end

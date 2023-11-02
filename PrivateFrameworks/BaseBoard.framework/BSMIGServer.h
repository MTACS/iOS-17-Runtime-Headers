
@interface BSMIGServer : NSObject {
    struct __CFRunLoopObserver { } * _entryObserver;
    struct __CFRunLoopObserver { } * _exitObserver;
    unsigned int  _port;
    NSString * _portName;
    struct mig_subsystem { int (*x1)(); int x2; int x3; unsigned int x4; unsigned long long x5; struct routine_descriptor { int (*x_6_1_1)(); int (*x_6_1_2)(); unsigned int x_6_1_3; unsigned int x_6_1_4; struct { /* ? */ } *x_6_1_5; unsigned int x_6_1_6; } x6[1]; } * _subsystem;
    struct _opaque_pthread_t { long long x1; struct __darwin_pthread_handler_rec {} *x2; BOOL x3[8176]; } * _thread;
}

@property (nonatomic, readonly, copy) NSString *threadName;
@property (nonatomic) int threadPriority;

- (void).cxx_destruct;
- (id)init;
- (id)initWithPortName:(id)arg1 subsystem:(struct mig_subsystem { int (*x1)(); int x2; int x3; unsigned int x4; unsigned long long x5; struct routine_descriptor { int (*x_6_1_1)(); int (*x_6_1_2)(); unsigned int x_6_1_3; unsigned int x_6_1_4; struct { /* ? */ } *x_6_1_5; unsigned int x_6_1_6; } x6[1]; }*)arg2 separateThread:(bool)arg3;
- (void)setThreadPriority:(int)arg1;
- (id)threadName;
- (int)threadPriority;

@end

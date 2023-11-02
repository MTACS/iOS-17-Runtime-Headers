
@interface _SUUIApplicationShutdownHelper : NSObject {
    SUUIApplicationController * _applicationController;
    unsigned long long  _taskID;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithApplicationController:(id)arg1;
- (void)start;
- (void)stop;

@end

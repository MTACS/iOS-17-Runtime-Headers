
@interface APNSURLSessionTaskInfo : NSObject {
    <NSURLSessionDataDelegate> * _delegate;
    NSArray * _modes;
    NSURLSessionDataTask * _task;
    NSThread * _thread;
}

@property <NSURLSessionDataDelegate> *delegate;
@property (retain) NSArray *modes;
@property (readonly) NSURLSessionDataTask *task;
@property (retain) NSThread *thread;

- (void).cxx_destruct;
- (id)delegate;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 modes:(id)arg3;
- (void)invalidate;
- (id)modes;
- (void)perform:(id /* block */)arg1 waitUntilDone:(bool)arg2;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlockAndWait:(id /* block */)arg1;
- (void)performBlockOnClientThread:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setModes:(id)arg1;
- (void)setThread:(id)arg1;
- (id)task;
- (id)thread;

@end

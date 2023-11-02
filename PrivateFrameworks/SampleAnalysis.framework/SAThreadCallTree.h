
@interface SAThreadCallTree : SACallTree {
    SADispatchQueue * _dispatchQueue;
    SASwiftTask * _swiftTask;
    SAThread * _thread;
}

@property (readonly) SADispatchQueue *dispatchQueue;
@property (readonly) SASwiftTask *swiftTask;
@property (readonly) SAThread *thread;

- (void).cxx_destruct;
- (id)dispatchQueue;
- (id)swiftTask;
- (id)thread;

@end


@interface SKDelegateResponseQueue : NSObject {
    NSObject<OS_dispatch_queue> * _dispatchQueue;
}

@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *dispatchQueue;

- (void).cxx_destruct;
- (id)dispatchQueue;
- (id)initWithQueue:(id)arg1;

@end

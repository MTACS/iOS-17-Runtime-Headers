
@interface IDSDaemonResponseHandler : NSObject {
    id  _block;
    bool  _isSync;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, readonly) id block;
@property (nonatomic, readonly) bool isSync;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)block;
- (id)initWithBlock:(id)arg1 queue:(id)arg2;
- (id)initWithBlock:(id)arg1 queue:(id)arg2 isSync:(bool)arg3;
- (bool)isSync;
- (id)queue;

@end

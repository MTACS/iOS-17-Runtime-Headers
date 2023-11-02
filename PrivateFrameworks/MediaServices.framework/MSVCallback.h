
@interface MSVCallback : NSObject {
    id  _block;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (nonatomic, copy) id block;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

+ (id)callbackWithQueue:(id)arg1 block:(id)arg2;

- (void).cxx_destruct;
- (id)block;
- (void)invoke;
- (void)invokeWithObject:(id)arg1;
- (id)queue;
- (void)setBlock:(id)arg1;
- (void)setQueue:(id)arg1;

@end

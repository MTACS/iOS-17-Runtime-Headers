
@interface _RECallbackAndPreviousStatus : NSObject {
    id /* block */  _invalidationCallback;
    NSObject<OS_dispatch_queue> * _queue;
    int  _status;
}

@property (nonatomic, copy) id /* block */ invalidationCallback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int status;

- (void).cxx_destruct;
- (id /* block */)invalidationCallback;
- (id)queue;
- (void)setInvalidationCallback:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setStatus:(int)arg1;
- (int)status;

@end

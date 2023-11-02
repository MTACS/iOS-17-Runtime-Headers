
@interface CHNotifyObserver : NSObject {
    id /* block */  _callback;
    NSString * _name;
    NSObject<OS_dispatch_queue> * _queue;
    int  _token;
}

@property (nonatomic, readonly, copy) id /* block */ callback;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) int token;

- (void).cxx_destruct;
- (id /* block */)callback;
- (void)dealloc;
- (id)initWithName:(id)arg1 queue:(id)arg2 callback:(id /* block */)arg3;
- (id)name;
- (id)queue;
- (void)setToken:(int)arg1;
- (int)token;

@end

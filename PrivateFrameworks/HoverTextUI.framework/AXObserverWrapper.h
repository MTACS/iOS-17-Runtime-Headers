
@interface AXObserverWrapper : NSObject {
    id /* block */  _handler;
    NSArray * _notifications;
    struct __AXObserver { } * _observer;
    NSRunLoop * _runloop;
    AXElement * _systemElement;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) NSArray *notifications;
@property (nonatomic, retain) struct __AXObserver { }*observer;
@property (nonatomic, retain) NSRunLoop *runloop;
@property (nonatomic, retain) AXElement *systemElement;

- (void).cxx_destruct;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithSystemElement:(id)arg1 runloop:(id)arg2 notifications:(id)arg3 handler:(id /* block */)arg4 error:(id*)arg5;
- (id)notifications;
- (struct __AXObserver { }*)observer;
- (id)runloop;
- (void)setHandler:(id /* block */)arg1;
- (void)setNotifications:(id)arg1;
- (void)setObserver:(struct __AXObserver { }*)arg1;
- (void)setRunloop:(id)arg1;
- (void)setSystemElement:(id)arg1;
- (id)systemElement;

@end

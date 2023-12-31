
@interface _PASNotificationDescriptor : NSObject {
    NSObject<OS_dispatch_group> * _group;
    id /* block */  _handler;
    NSObject<OS_dispatch_queue> * _queue;
    _Atomic bool  isCanceled;
}

@property (nonatomic, retain) NSObject<OS_dispatch_group> *group;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;

- (void).cxx_destruct;
- (id)group;
- (id /* block */)handler;
- (id)queue;
- (void)setGroup:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;

@end

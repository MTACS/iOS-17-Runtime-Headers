
@interface OSLogEventStreamBase : NSObject {
    NSPredicate * _filterPredicate;
    unsigned long long  _flags;
    unsigned int  _invalidated;
    id /* block */  _invalidationHandler;
    NSObject<OS_dispatch_queue> * _queue;
    id /* block */  _streamHandler;
    NSObject<OS_dispatch_queue> * _target;
}

@property (nonatomic, copy) NSPredicate *filterPredicate;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) unsigned int invalidated;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, copy) id /* block */ streamHandler;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *target;

- (void).cxx_destruct;
- (id)filterPredicate;
- (unsigned long long)flags;
- (id)init;
- (void)invalidate;
- (unsigned int)invalidated;
- (id /* block */)invalidationHandler;
- (id)queue;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setFilterPredicate:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setInvalidated:(unsigned int)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setStreamHandler:(id /* block */)arg1;
- (void)setTarget:(id)arg1;
- (id /* block */)streamHandler;
- (id)target;

@end


@interface SVXQueuePerformer : NSObject <SVXPerforming> {
    NSString * _identifier;
    unsigned long long  _options;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) Class superclass;

+ (id)sharedMainQueuePerformer;

- (void).cxx_destruct;
- (id)_initWithIdentifier:(id)arg1 queue:(id)arg2 options:(unsigned long long)arg3;
- (bool)_isExecutingInContext;
- (void)_performBlock:(id /* block */)arg1 withOptions:(unsigned long long)arg2;
- (void)_performBlockSync:(id /* block */)arg1 withOptions:(unsigned long long)arg2;
- (id)description;
- (id)initWithIdentifier:(id)arg1 qosClass:(unsigned int)arg2 relativePriority:(int)arg3 options:(unsigned long long)arg4;
- (void)performBlock:(id /* block */)arg1;
- (void)performBlock:(id /* block */)arg1 afterDelay:(double)arg2;
- (void)performBlock:(id /* block */)arg1 afterGroup:(id)arg2;
- (void)performBlock:(id /* block */)arg1 withOptions:(unsigned long long)arg2;
- (void)performBlockSync:(id /* block */)arg1;
- (id)queue;

@end

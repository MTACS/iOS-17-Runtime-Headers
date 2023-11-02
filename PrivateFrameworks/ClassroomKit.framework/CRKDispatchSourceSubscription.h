
@interface CRKDispatchSourceSubscription : NSObject <CRKCancelable> {
    id /* block */  _handler;
    NSObject<OS_dispatch_source> * _source;
}

@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, readonly) NSObject<OS_dispatch_source> *source;

+ (id)subscriptionWithSource:(id)arg1 handler:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (id /* block */)handler;
- (id)initWithSource:(id)arg1 handler:(id /* block */)arg2;
- (void)resume;
- (void)setHandler:(id /* block */)arg1;
- (id)source;

@end

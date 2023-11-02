
@interface WebMainThreadInvoker : NSProxy {
    struct RetainPtr<id> { 
        void *m_ptr; 
    }  exception;
    id  target;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (void)handleException:(id)arg1;
- (id)initWithTarget:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end

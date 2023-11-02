
@interface WebPolicyDecisionListenerPrivate : NSObject {
    SEL  action;
    struct RetainPtr<id> { 
        void *m_ptr; 
    }  target;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;

@end

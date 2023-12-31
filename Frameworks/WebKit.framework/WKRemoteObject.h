
@interface WKRemoteObject : NSObject {
    struct RetainPtr<_WKRemoteObjectInterface> { 
        void *m_ptr; 
    }  _interface;
    struct RetainPtr<_WKRemoteObjectRegistry> { 
        void *m_ptr; 
    }  _objectRegistry;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_initWithObjectRegistry:(id)arg1 interface:(id)arg2;
- (bool)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;

@end


@interface RWIProtocolConfiguration : NSObject {
    struct RetainPtr<RWIProtocolConsoleDomainEventDispatcher> { 
        void *m_ptr; 
    }  _consoleEventDispatcher;
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
    struct RetainPtr<RWIProtocolCSSDomainEventDispatcher> { 
        void *m_ptr; 
    }  _cssEventDispatcher;
    struct RetainPtr<id<RWIProtocolCSSDomainHandler>> { 
        void *m_ptr; 
    }  _cssHandler;
    struct RetainPtr<RWIProtocolDOMDomainEventDispatcher> { 
        void *m_ptr; 
    }  _domEventDispatcher;
    struct RetainPtr<id<RWIProtocolDOMDomainHandler>> { 
        void *m_ptr; 
    }  _domHandler;
    struct RetainPtr<RWIProtocolDOMStorageDomainEventDispatcher> { 
        void *m_ptr; 
    }  _domStorageEventDispatcher;
    struct RetainPtr<id<RWIProtocolDOMStorageDomainHandler>> { 
        void *m_ptr; 
    }  _domStorageHandler;
    struct RetainPtr<RWIProtocolNetworkDomainEventDispatcher> { 
        void *m_ptr; 
    }  _networkEventDispatcher;
    struct RetainPtr<id<RWIProtocolNetworkDomainHandler>> { 
        void *m_ptr; 
    }  _networkHandler;
    struct RetainPtr<RWIProtocolPageDomainEventDispatcher> { 
        void *m_ptr; 
    }  _pageEventDispatcher;
    struct RetainPtr<id<RWIProtocolPageDomainHandler>> { 
        void *m_ptr; 
    }  _pageHandler;
}

@property (nonatomic, readonly) RWIProtocolConsoleDomainEventDispatcher *consoleEventDispatcher;
@property (nonatomic, readonly) RWIProtocolCSSDomainEventDispatcher *cssEventDispatcher;
@property (setter=setCSSHandler:, nonatomic, retain) <RWIProtocolCSSDomainHandler> *cssHandler;
@property (nonatomic, readonly) RWIProtocolDOMDomainEventDispatcher *domEventDispatcher;
@property (setter=setDOMHandler:, nonatomic, retain) <RWIProtocolDOMDomainHandler> *domHandler;
@property (nonatomic, readonly) RWIProtocolDOMStorageDomainEventDispatcher *domStorageEventDispatcher;
@property (setter=setDOMStorageHandler:, nonatomic, retain) <RWIProtocolDOMStorageDomainHandler> *domStorageHandler;
@property (nonatomic, readonly) RWIProtocolNetworkDomainEventDispatcher *networkEventDispatcher;
@property (setter=setNetworkHandler:, nonatomic, retain) <RWIProtocolNetworkDomainHandler> *networkHandler;
@property (nonatomic, readonly) RWIProtocolPageDomainEventDispatcher *pageEventDispatcher;
@property (setter=setPageHandler:, nonatomic, retain) <RWIProtocolPageDomainHandler> *pageHandler;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)consoleEventDispatcher;
- (id)cssEventDispatcher;
- (id)cssHandler;
- (id)domEventDispatcher;
- (id)domHandler;
- (id)domStorageEventDispatcher;
- (id)domStorageHandler;
- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;
- (id)networkEventDispatcher;
- (id)networkHandler;
- (id)pageEventDispatcher;
- (id)pageHandler;
- (void)setCSSHandler:(id)arg1;
- (void)setDOMHandler:(id)arg1;
- (void)setDOMStorageHandler:(id)arg1;
- (void)setNetworkHandler:(id)arg1;
- (void)setPageHandler:(id)arg1;

@end

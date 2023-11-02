
@interface _WKAutomationSession : NSObject <WKObject> {
    struct RetainPtr<_WKAutomationSessionConfiguration> { 
        void *m_ptr; 
    }  _configuration;
    struct WeakObjCPtr<id<_WKAutomationSessionDelegate>> { 
        id m_weakReference; 
    }  _delegate;
    struct ObjectStorage<WebKit::WebAutomationSession> { 
        struct type { 
            unsigned char __lx[328]; 
        } data; 
    }  _session;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (nonatomic, readonly, copy) _WKAutomationSessionConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <_WKAutomationSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isPaired, nonatomic, readonly) bool paired;
@property (getter=isPendingTermination, nonatomic, readonly) bool pendingTermination;
@property (nonatomic, copy) NSString *sessionIdentifier;
@property (getter=isSimulatingUserInteraction, nonatomic, readonly) bool simulatingUserInteraction;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (id)configuration;
- (void)dealloc;
- (id)delegate;
- (id)init;
- (id)initWithConfiguration:(id)arg1;
- (bool)isPaired;
- (bool)isPendingTermination;
- (bool)isSimulatingUserInteraction;
- (id)sessionIdentifier;
- (void)setDelegate:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)terminate;

@end

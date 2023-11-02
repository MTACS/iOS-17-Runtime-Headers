
@interface WKConnection : NSObject <WKObject> {
    struct WeakObjCPtr<id<WKConnectionDelegate>> { 
        id m_weakReference; 
    }  _delegate;
}

@property (readonly) struct Object { int (**x1)(); void *x2; }*_apiObject;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WKConnectionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct Object { int (**x1)(); void *x2; }*)_apiObject;
- (void*)_connection;
- (void)dealloc;
- (id)delegate;
- (void)sendMessageWithName:(id)arg1 body:(id)arg2;
- (void)setDelegate:(id)arg1;

@end

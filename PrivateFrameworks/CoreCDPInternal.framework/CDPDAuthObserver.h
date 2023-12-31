
@interface CDPDAuthObserver : NSObject <CDPDXPCEventListener> {
    NSMutableArray * _authListeners;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)eventReceived:(const char *)arg1 eventInfo:(id)arg2;
- (id)init;
- (void)registerListener:(id)arg1;

@end

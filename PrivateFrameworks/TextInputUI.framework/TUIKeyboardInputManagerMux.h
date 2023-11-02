
@interface TUIKeyboardInputManagerMux : NSObject {
    NSMutableArray * _clients;
    <_UIIVCResponseDelegateImpl> * _responseDelegate;
    <TIKeyboardInputManager> * _systemInputManager;
}

@property (nonatomic, retain) NSMutableArray *clients;
@property (nonatomic, readonly) bool hasSystemInputManager;
@property (nonatomic, retain) <_UIIVCResponseDelegateImpl> *responseDelegate;
@property (nonatomic, retain) <TIKeyboardInputManager> *systemInputManager;

+ (bool)instancesRespondToSelector:(SEL)arg1;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (bool)_systemHasKbd;
- (void)addClient:(id)arg1;
- (id)clients;
- (bool)conformsToProtocol:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (bool)hasSystemInputManager;
- (bool)isKindOfClass:(Class)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)releaseConnectedClients;
- (void)removeAllClients;
- (void)removeClient:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (id)responseDelegate;
- (void)setClients:(id)arg1;
- (void)setResponseDelegate:(id)arg1;
- (void)setSystemInputManager:(id)arg1;
- (void)setSystemInputManagerFromTextInputTraits:(id)arg1 autofillMode:(unsigned long long)arg2 implProxy:(id)arg3;
- (id)systemInputManager;
- (void)updateClientResponseDelegatesWithDelegate:(id)arg1;

@end

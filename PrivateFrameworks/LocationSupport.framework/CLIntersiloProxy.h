
@interface CLIntersiloProxy : NSProxy {
    <CLIntersiloProxyDelegateProtocol> * _delegate;
    CLSilo * _delegateSilo;
}

@property (nonatomic, readonly) <CLIntersiloProxyDelegateProtocol> *delegate;
@property (nonatomic, readonly) CLSilo *delegateSilo;

+ (Class)initiatorRepresentingClass;
+ (id)proxyForRecipientObject:(id)arg1 inSilo:(id)arg2 recipientName:(id)arg3;
+ (Class)recipientRepresentingClass;

- (void).cxx_destruct;
- (id)delegate;
- (id)delegateSilo;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)initWithDelegateObject:(id)arg1 delegateSilo:(id)arg2;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)offsiloHandleInvocation:(id)arg1 selectorInfo:(id)arg2 peer:(id)arg3;
- (id)peer;
- (void)registerDelegate:(id)arg1 inSilo:(id)arg2;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setDelegateEntityName:(const char *)arg1;

@end

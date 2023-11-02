
@interface SVXAnnouncer : NSObject {
    NSHashTable * _listeners;
    struct __CFDictionary { } * _protocolOptionalInstanceMethodSignaturesBySelector;
    struct __CFDictionary { } * _protocolRequiredInstanceMethodSignaturesBySelector;
}

+ (id)protocol;

- (void).cxx_destruct;
- (void)_accessListenersUsingBlock:(id /* block */)arg1;
- (void)addListener:(id)arg1;
- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)removeAllListeners;
- (void)removeListener:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;

@end

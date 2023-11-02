
@interface NADelegateDispatcher : NSObject {
    NSMapTable * _cachedMethodMetadataBySelector;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NADelegateMethodLogSettings * _logSettings;
    NSHashTable * _observerTable;
    NSArray * _overrideObservers;
    Protocol * _protocol;
}

@property (nonatomic, readonly) NSMapTable *cachedMethodMetadataBySelector;
@property (nonatomic, readonly) struct os_unfair_lock_s { unsigned int x1; } lock;
@property (nonatomic, retain) NADelegateMethodLogSettings *logSettings;
@property (nonatomic, readonly) NSHashTable *observerTable;
@property (nonatomic, readonly) NSArray *observers;
@property (nonatomic, retain) NSArray *overrideObservers;
@property (nonatomic, readonly) Protocol *protocol;
@property (nonatomic, readonly) id proxy;

+ (id)_findMethodSignatureForSelector:(SEL)arg1 inProtocol:(id)arg2;
+ (id)dispatcherWithProtocol:(id)arg1 logSettings:(id)arg2;

- (void).cxx_destruct;
- (id)_descriptionForArgument:(id)arg1 index:(unsigned long long)arg2 format:(bool)arg3 metadata:(id)arg4;
- (id)_effectiveObservers;
- (id)_lock_methodMetadataForSelector:(SEL)arg1;
- (void)_logEventForInvocation:(id)arg1 metadata:(id)arg2;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(bool)arg3 arg0:(id)arg4;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(bool)arg3 arg0:(id)arg4 arg1:(id)arg5;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(bool)arg3 arg0:(id)arg4 arg1:(id)arg5 arg2:(id)arg6;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(bool)arg3 arg0:(id)arg4 arg1:(id)arg5 arg2:(id)arg6 arg3:(id)arg7;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(bool)arg3 arg0:(id)arg4 arg1:(id)arg5 arg2:(id)arg6 arg3:(id)arg7 arg4:(id)arg8;
- (void)_logEventForSelector:(SEL)arg1 metadata:(id)arg2 formatArgs:(bool)arg3 arg0:(id)arg4 arg1:(id)arg5 arg2:(id)arg6 arg3:(id)arg7 arg4:(id)arg8 arg5:(id)arg9;
- (id)_methodMetadataForSelector:(SEL)arg1;
- (id)_trampolineBlockForSelector:(SEL)arg1 withMethodSignature:(id)arg2;
- (void)addObserver:(id)arg1;
- (id)cachedMethodMetadataBySelector;
- (bool)conformsToProtocol:(id)arg1;
- (void)dispatchMessageExcludingSender:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)forwardInvocation:(id)arg1;
- (id)initWithProtocol:(id)arg1 logSettings:(id)arg2;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (id)logSettings;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)observerTable;
- (id)observers;
- (id)overrideObservers;
- (id)protocol;
- (id)proxy;
- (void)registerCustomHandlerForSelector:(SEL)arg1 handler:(id /* block */)arg2;
- (void)registerCustomLogSettings:(id)arg1 forSelector:(SEL)arg2 argumentIndex:(unsigned long long)arg3;
- (void)removeObserver:(id)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)setLogSettings:(id)arg1;
- (void)setOverrideObservers:(id)arg1;

@end

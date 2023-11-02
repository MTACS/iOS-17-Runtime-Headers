
@interface _UIViewServiceDeputyManager : NSObject <_UIViewServiceViewControllerOperatorDelegate> {
    NSMutableDictionary * _connectionHandlers;
    NSLock * _connectionHandlersLock;
    id  _delegate;
    NSMutableSet * _deputies;
    _UIAsyncInvocation * _invalidationInvocation;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property id delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)exportedInterfaceSupportingDeputyInterfaces:(id)arg1;
+ (void)initialize;

- (void)__prototype_requestConnectionToDeputyFromHostObject:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)__requestConnectionToDeputyOfClass:(void *)arg1 fromHostObject:(void *)arg2 replyHandler:(void *)arg3; // needs 3 arg types, found 4: Class, byref /* Warning: Unrecognized filer type: '' using 'void*' */ void*, id, id /* block */
- (Class)_deputyClassForConnectionSelector:(SEL)arg1;
- (void)_invalidateUnconditionallyThen:(id /* block */)arg1;
- (void)_objc_initiateDealloc;
- (void)checkDeputyForRotation:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (void)invalidate;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)registerDeputyClass:(Class)arg1 withConnectionHandler:(id /* block */)arg2;
- (void)setDelegate:(id)arg1;
- (void)unregisterDeputyClass:(Class)arg1;
- (void)viewControllerOperator:(id)arg1 didCreateServiceViewControllerOfClass:(Class)arg2;

@end

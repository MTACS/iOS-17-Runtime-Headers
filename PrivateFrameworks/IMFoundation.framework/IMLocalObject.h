
@interface IMLocalObject : NSObject {
    id  _internal;
}

@property (nonatomic, retain) NSArray *allowlistedClasses;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *connection;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) NSString *portName;
@property (nonatomic, retain) NSString *processName;
@property (nonatomic, readonly) NSProtocolChecker *protocolChecker;
@property (nonatomic) id target;
@property (nonatomic, readonly) bool wasInterrupted;
@property (nonatomic, retain) NSArray *whitelistedClasses;

+ (id)_imLocalObjectQueue;
+ (id)_imLocalObjectQueueTargetingWorkloop;
+ (void)_registerIMLocalObject:(id)arg1;
+ (id)_registeredIMLocalObjectForPort:(unsigned int)arg1;
+ (void)_setExceptionHandlingDisabled:(bool)arg1;
+ (void)_unregisterIMLocalObject:(id)arg1;
+ (void)initialize;

- (void)_clearPort:(bool)arg1;
- (void)_clearPort:(bool)arg1 signalRunLoopIfNeeded:(bool)arg2;
- (id)_currentMessageContext;
- (void)_enqueueInvocation:(id)arg1;
- (void)_enqueueInvocation:(id)arg1 xpcMessage:(id)arg2;
- (void)_enqueueInvocation:(id)arg1 xpcMessage:(id)arg2 submitToComponentQueue:(bool)arg3 isSync:(bool)arg4 isReply:(bool)arg5;
- (void)_enqueueInvocationWithPriority:(id)arg1 priority:(int)arg2;
- (void)_enqueueInvocationWithPriority:(id)arg1 xpcMessage:(id)arg2 priority:(int)arg3;
- (void)_enqueueInvocationWithSync:(id)arg1;
- (void)_enqueueInvocationWithSync:(id)arg1 xpcMessage:(id)arg2;
- (void)_enqueueInvocationWithSync:(id)arg1 xpcMessage:(id)arg2 submitToComponentQueue:(bool)arg3;
- (void)_enqueueInvocationWithSync:(id)arg1 xpcMessage:(id)arg2 submitToComponentQueue:(bool)arg3 isReply:(bool)arg4;
- (bool)_handleInvocation:(id)arg1;
- (bool)_handleInvocation:(id)arg1 processingComponentQueue:(bool)arg2;
- (void)_handleNewInvocations;
- (void)_noteNewInvocation:(bool)arg1;
- (id)_peekInvocation;
- (void)_popInvocation;
- (void)_portDidBecomeInvalid;
- (void)_portInterrupted;
- (void)_systemShutdown:(id)arg1;
- (id)allowlistedClasses;
- (id)connection;
- (void)dealloc;
- (id)description;
- (bool)handleInvocation:(id)arg1;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(bool)arg4;
- (id)initWithTarget:(id)arg1 connection:(id)arg2 protocol:(id)arg3 forceSecureCoding:(bool)arg4 offMainThread:(bool)arg5;
- (id)initWithTarget:(id)arg1 portName:(id)arg2 protocol:(id)arg3;
- (id)initWithTarget:(id)arg1 protocol:(id)arg2;
- (void)invalidate;
- (bool)isSameConnection:(id)arg1;
- (bool)isValid;
- (bool)isValidSelector:(SEL)arg1;
- (id)portName;
- (id)processName;
- (id)protocolChecker;
- (void)setAllowlistedClasses:(id)arg1;
- (void)setPortName:(id)arg1;
- (void)setProcessName:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)setWhitelistedClasses:(id)arg1;
- (id)target;
- (void)terminated;
- (bool)wasInterrupted;
- (id)whitelistedClasses;

@end

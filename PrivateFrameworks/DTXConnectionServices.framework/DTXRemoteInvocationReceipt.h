
@interface DTXRemoteInvocationReceipt : NSObject {
    id /* block */  _completionHandler;
    unsigned int  _completionState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _guard;
    unsigned int  _reserved;
    id  _returnValue;
    unsigned int  _valueState;
    id /* block */  _waiterChain;
}

- (void).cxx_destruct;
- (void)_checkedAssign:(id /* block */)arg1;
- (void)handleCompletion:(id /* block */)arg1;
- (id)init;
- (void)invokeCompletionWithReturnValue:(id)arg1 error:(id)arg2;
- (void)waitForFulfillment;

@end

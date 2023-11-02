
@interface BiometricKitUI.EnrollStateDispatchWorkItemsManager : NSObject {
    void pendingOperations;
    void stateQueue;
    void targetStartState;
    void targetState;
}

- (void).cxx_destruct;
- (id)init;
- (void)removeAllWorkItems;
- (void)submitWorkItemFor:(int)arg1 startState:(int)arg2 work:(id /* block */)arg3;

@end

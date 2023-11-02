
@interface CNPromise : NSObject <CNPromise> {
    CNFuture * _future;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) CNFuture *future;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)boolErrorCompletionHandlerAdapter;
- (id /* block */)completionHandlerAdapter;
- (id /* block */)completionHandlerAdapterWithDefaultValue:(id)arg1;
- (id /* block */)errorOnlyCompletionHandlerAdapter;
- (bool)finishWithError:(id)arg1;
- (bool)finishWithResult:(id)arg1;
- (bool)finishWithResult:(id)arg1 error:(id)arg2;
- (id)future;
- (id)init;
- (id)initWithSchedulerProvider:(id)arg1;

@end

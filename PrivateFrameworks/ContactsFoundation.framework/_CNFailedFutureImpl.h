
@interface _CNFailedFutureImpl : NSObject <CNFutureImpl> {
    NSError * _error;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFailureBlock:(id /* block */)arg1;
- (void)addSuccessBlock:(id /* block */)arg1;
- (bool)cancel;
- (id)initWithError:(id)arg1;
- (bool)isCancelled;
- (bool)isFinished;
- (id)resultBeforeDate:(id)arg1 error:(id*)arg2;
- (void)updateDescriptionWithBuilder:(id)arg1;

@end

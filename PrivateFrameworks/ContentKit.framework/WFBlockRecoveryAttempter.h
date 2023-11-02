
@interface WFBlockRecoveryAttempter : NSObject <WFErrorRecoveryAttempting> {
    id /* block */  _handlerBlock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, copy) id /* block */ handlerBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2;
- (void)attemptRecoveryFromError:(id)arg1 optionIndex:(unsigned long long)arg2 userInterface:(id)arg3 completionHandler:(id /* block */)arg4;
- (id /* block */)handlerBlock;
- (id)initWithHandlerBlock:(id /* block */)arg1;
- (void)setHandlerBlock:(id /* block */)arg1;

@end


@interface MCMResultPromise : NSObject <MCMResultPromise> {
    bool  _complete;
    id /* block */  _completion;
    <MCMResult> * _result;
}

@property (nonatomic, readonly) bool complete;
@property (nonatomic, readonly) id /* block */ completion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <MCMResult> *result;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)complete;
- (void)completeWithResult:(id)arg1;
- (id /* block */)completion;
- (id)init;
- (id)initWithCompletion:(id /* block */)arg1;
- (id)result;

@end


@interface SWQueueableScriptWithCompletion : NSObject {
    id /* block */  _completion;
    <SWScript> * _script;
}

@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly) <SWScript> *script;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)initWithScript:(id)arg1 completion:(id /* block */)arg2;
- (id)script;

@end

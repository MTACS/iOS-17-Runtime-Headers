
@interface AVTTransition : NSObject <AVTTransition> {
    bool  _animated;
    id /* block */  _completionHandler;
    <AVTUILogger> * _logger;
    <AVTTransitionModel> * _model;
    id /* block */  _setupHandler;
    long long  _state;
}

@property (nonatomic) bool animated;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <AVTUILogger> *logger;
@property (nonatomic, readonly) <AVTTransitionModel> *model;
@property (nonatomic, copy) id /* block */ setupHandler;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)animated;
- (void)cancel;
- (id /* block */)completionHandler;
- (id)description;
- (id)initWithModel:(id)arg1 animated:(bool)arg2 setupHandler:(id /* block */)arg3 completionHandler:(id /* block */)arg4 logger:(id)arg5;
- (id)logger;
- (id)model;
- (void)performCancellation;
- (void)performTransition;
- (void)setAnimated:(bool)arg1;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setSetupHandler:(id /* block */)arg1;
- (void)setState:(long long)arg1;
- (id /* block */)setupHandler;
- (void)start;
- (long long)state;

@end

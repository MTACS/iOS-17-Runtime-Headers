
@interface INResolutionResultTransformationOperation : NSOperation {
    bool  _executing;
    bool  _finished;
    INIntent * _intent;
    INIntentSlotDescription * _intentSlotDescription;
    <INIntentParameterOptionsProviding> * _optionsProvider;
    <INIntentResolutionResultDataProviding> * _result;
    id /* block */  _returnBlock;
}

@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly) INIntentSlotDescription *intentSlotDescription;
@property (nonatomic, readonly) <INIntentParameterOptionsProviding> *optionsProvider;
@property (nonatomic, readonly) <INIntentResolutionResultDataProviding> *result;
@property (nonatomic, copy) id /* block */ returnBlock;

- (void).cxx_destruct;
- (id)initWithResult:(id)arg1 intent:(id)arg2 intentSlotDescription:(id)arg3 optionsProvider:(id)arg4;
- (id)intent;
- (id)intentSlotDescription;
- (bool)isExecuting;
- (bool)isFinished;
- (id)optionsProvider;
- (id)result;
- (id /* block */)returnBlock;
- (void)setReturnBlock:(id /* block */)arg1;
- (void)start;

@end

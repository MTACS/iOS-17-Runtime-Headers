
@interface WFSequentialParameterInputProvider : NSObject {
    NSDictionary * _defaultStates;
    <WFSequentialParameterInputProviderDelegate> * _delegate;
    WFAction * _fakeAction;
    NSMutableDictionary * _inputtedStates;
    NSDictionary * _prompts;
    NSMutableOrderedSet * _queuedParameters;
}

@property (nonatomic, retain) NSDictionary *defaultStates;
@property (nonatomic) <WFSequentialParameterInputProviderDelegate> *delegate;
@property (nonatomic, retain) WFAction *fakeAction;
@property (nonatomic, retain) NSMutableDictionary *inputtedStates;
@property (nonatomic, retain) NSDictionary *prompts;
@property (nonatomic, retain) NSMutableOrderedSet *queuedParameters;

- (void).cxx_destruct;
- (void)askForParameterIfAvailable;
- (id)defaultStates;
- (id)delegate;
- (id)fakeAction;
- (id)initWithDelegate:(id)arg1;
- (id)inputtedStates;
- (void)persistInFlightParameters;
- (id)prompts;
- (id)queuedParameters;
- (void)setDefaultStates:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFakeAction:(id)arg1;
- (void)setInputtedStates:(id)arg1;
- (void)setPrompts:(id)arg1;
- (void)setQueuedParameters:(id)arg1;
- (void)startWithAction:(id)arg1 parameters:(id)arg2 defaultStates:(id)arg3 prompts:(id)arg4;

@end

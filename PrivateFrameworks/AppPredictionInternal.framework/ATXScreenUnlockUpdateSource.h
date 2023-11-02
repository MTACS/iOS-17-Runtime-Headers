
@interface ATXScreenUnlockUpdateSource : NSObject <ATXUpdatePredictionsSource> {
    ATXCoreDuetContextHelper * _contextHelper;
    <ATXUpdatePredictionsDelegate> * _delegate;
    <ATXPredictionContextBuilderProtocol> * _predictionContextBuilder;
}

@property (nonatomic, retain) ATXCoreDuetContextHelper *contextHelper;
@property (nonatomic) <ATXUpdatePredictionsDelegate> *delegate;
@property (nonatomic, retain) <ATXPredictionContextBuilderProtocol> *predictionContextBuilder;

- (void).cxx_destruct;
- (void)_handleScreenUnlockEvent;
- (void)_listenForScreenUnlock;
- (id)contextHelper;
- (id)delegate;
- (id)init;
- (id)initWithContextHelper:(id)arg1 predictionContextBuilder:(id)arg2;
- (id)predictionContextBuilder;
- (void)setContextHelper:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setPredictionContextBuilder:(id)arg1;

@end


@interface TRIBaseTask : NSObject {
    <TRITaskQueueStateProviding> * _stateProvider;
    NSDate * startTime;
}

@property (nonatomic, readonly) NSArray *dependencies;
@property (nonatomic, retain) NSDate *startTime;
@property (nonatomic) <TRITaskQueueStateProviding> *stateProvider;
@property (nonatomic, readonly) NSArray *tags;
@property (nonatomic, readonly) NSString *taskName;

- (void).cxx_destruct;
- (id)dependencies;
- (id)description;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned long long)requiredCapabilities;
- (void)runDequeueHandlerUsingContext:(id)arg1;
- (void)runEnqueueHandlerUsingContext:(id)arg1;
- (void)setStartTime:(id)arg1;
- (void)setStateProvider:(id)arg1;
- (id)startTime;
- (id)stateProvider;
- (id)tags;
- (id)taskName;

@end

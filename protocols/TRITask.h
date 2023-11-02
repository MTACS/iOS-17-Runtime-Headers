
@protocol TRITask <NSObject, NSSecureCoding>

@required

+ (id)parseFromData:(NSData *)arg1;

- (NSArray *)dependencies;
- (unsigned long long)requiredCapabilities;
- (void)runDequeueHandlerUsingContext:(TRIServerContext *)arg1;
- (void)runEnqueueHandlerUsingContext:(TRIServerContext *)arg1;
- (TRITaskRunResult *)runUsingContext:(TRIServerContext *)arg1 withTaskQueue:(id <TRITaskQueueControlling>)arg2;
- (NSData *)serialize;
- (void)setStartTime:(NSDate *)arg1;
- (void)setStateProvider:(id <TRITaskQueueStateProviding>)arg1;
- (NSDate *)startTime;
- (<TRITaskQueueStateProviding> *)stateProvider;
- (NSArray *)tags;
- (NSString *)taskName;
- (int)taskType;

@end

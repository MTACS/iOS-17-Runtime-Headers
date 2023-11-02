
@protocol TRICancellableTask <TRITask>

@required

- (void)willBeCancelledByTaskQueue:(id <TRITaskQueueControlling>)arg1 withContext:(TRIServerContext *)arg2;

@end

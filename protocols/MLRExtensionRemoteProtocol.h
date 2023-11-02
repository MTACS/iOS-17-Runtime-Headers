
@protocol MLRExtensionRemoteProtocol <NSObject>

@required

- (void)performDodMLTask:(void *)arg1 sandBoxExtensions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: DESInternalDodMLTask *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DESDodMLTaskResultContainer *, NSError *, void*
- (void)performTask:(void *)arg1 sandBoxExtensions:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: <MLRInternalTaskRepresenting> *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)performTrialTask:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: MLRInternalTrialTask *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, MLRInternalTrialTaskResult *, NSError *, void*
- (void)simulateCrash;
- (void)stop;

@end

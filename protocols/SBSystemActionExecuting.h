
@protocol SBSystemActionExecuting <NSObject>

@required

- (bool)canBeExecuted;
- (void)cancelPreviewing;
- (<BSInvalidatable> *)executeWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SBSystemActionInteractionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <SBSystemActionExecuting> *, NSError *, void*
- (double)executionEndTime;
- (double)executionStartTime;
- (bool)isExecuting;
- (NSError *)previewWithCoordinator:(id <SBSystemActionPreviewCoordinating>)arg1;
- (SBSystemAction *)systemAction;

@end

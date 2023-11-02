
@protocol TRITaskQueuing <TRITaskQueueControlling>

@required

- (struct { unsigned char x1; })addTask:(id <TRITask>)arg1 options:(TRITaskQueuingOptions *)arg2;
- (struct { unsigned char x1; })addTask:(id <TRITask>)arg1 options:(TRITaskQueuingOptions *)arg2 taskId:(id*)arg3;
- (bool)cancelTask:(id <TRITask>)arg1;
- (unsigned long long)count;
- (void)registerFinalizeBlock:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, <TRITask> *, int, TRITaskRunResult *, NSDate *, void*
- (void)resumeWithXPCActivityDescriptor:(void *)arg1 executeWhenSuspended:(void *)arg2; // needs 2 arg types, found 6: TRIRunningXPCActivityDescriptor *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

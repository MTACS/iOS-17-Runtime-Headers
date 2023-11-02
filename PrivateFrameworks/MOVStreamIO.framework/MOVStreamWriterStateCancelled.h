
@interface MOVStreamWriterStateCancelled : MOVStreamWriterStateFinished

- (void)activateWithContext:(id)arg1;
- (id)cancelRecording:(id)arg1;
- (id)criticalErrorOccurred:(id)arg1 context:(id)arg2;
- (id)name;
- (long long)writerStatus;

@end


@protocol MOVStreamWriterState <NSObject>

@required

- (void)activateWithContext:(id <MOVStreamWriterStateContext>)arg1;
- (bool)canAppendData:(id <MOVStreamWriterStateContext>)arg1;
- (bool)canConfigure:(id <MOVStreamWriterStateContext>)arg1;
- (bool)canFinishRecording:(id <MOVStreamWriterStateContext>)arg1;
- (bool)canWriteData:(id <MOVStreamWriterStateContext>)arg1;
- (<MOVStreamWriterState> *)cancelRecording:(id <MOVStreamWriterStateContext>)arg1;
- (<MOVStreamWriterState> *)criticalErrorOccurred:(NSError *)arg1 context:(id <MOVStreamWriterStateContext>)arg2;
- (<MOVStreamWriterState> *)finishRecording:(id <MOVStreamWriterStateContext>)arg1;
- (<MOVStreamWriterState> *)finishedCancelRecording:(id <MOVStreamWriterStateContext>)arg1;
- (<MOVStreamWriterState> *)forceFinishRecording:(id <MOVStreamWriterStateContext>)arg1;
- (NSString *)name;
- (<MOVStreamWriterState> *)nextFinishStep:(id <MOVStreamWriterStateContext>)arg1;
- (<MOVStreamWriterState> *)prepareFinished:(id <MOVStreamWriterStateContext>)arg1;
- (<MOVStreamWriterState> *)prepareRecording:(id <MOVStreamWriterStateContext>)arg1;
- (bool)stopWriterWhenFifosAreEmpty:(id <MOVStreamWriterStateContext>)arg1;
- (long long)writerStatus;

@end
